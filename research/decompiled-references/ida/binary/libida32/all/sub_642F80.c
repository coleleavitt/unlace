unsigned __int64 __fastcall sub_642F80(__int64 a1, _BYTE *a2, __int64 a3, unsigned __int64 a4, char a5, int a6)
{
  _BYTE *v6; // r14
  _BYTE *v9; // rbx
  int v11; // r13d
  int v12; // eax
  char v13; // r8
  char *v14; // rax
  char v15; // dl
  char v16; // [rsp+0h] [rbp-48h]
  char v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v6 = &a2[a3];
  LODWORD(v9) = (_DWORD)a2;
  v18 = __readfsqword(0x28u);
  *a2 = 0;
  if ( *(char *)(a1 + 33) < 0 )
  {
    v11 = a3;
    v12 = qsnprintf((int)a2, a3, (int)&unk_22B60D2, a4 >> 3, a5, a6, v16);
    v9 = &a2[v12];
    if ( (a5 & 1) != 0 )
      v9 += (int)qsnprintf((int)v9, v11 - v12, (int)".%d", a4 & 7, v13, a6, v16);
    if ( v9 >= v6 )
    {
      if ( !under_debugger )
        interr(520);
      BUG();
    }
    v14 = (char *)&unk_22B60CD;
    if ( v9 == v6 - 1 )
    {
LABEL_13:
      *(v6 - 1) = 0;
      LODWORD(v9) = (_DWORD)v6 - 1;
    }
    else
    {
      while ( 1 )
      {
        v15 = *v14++;
        *v9 = v15;
        if ( !v15 )
          break;
        if ( ++v9 == v6 - 1 )
          goto LABEL_13;
      }
    }
  }
  if ( (a5 & 2) != 0 )
  {
    v17 = 0;
    if ( (a5 & 1) != 0 )
      qsnprintf((int)&v17, 8, (int)&unk_22B60DD, a4 & 7, (unsigned __int8)&v17, a6, v16);
    qsnprintf((int)v9, (_DWORD)v6 - (_DWORD)v9, (int)&unk_231F6B8, a4 >> 3, (unsigned __int8)&v17, a6, v16);
  }
  return v18 - __readfsqword(0x28u);
}

