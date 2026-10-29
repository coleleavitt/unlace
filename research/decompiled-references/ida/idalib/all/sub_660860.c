unsigned __int64 __fastcall sub_660860(__int64 a1, _BYTE *a2, __int64 a3, unsigned __int64 a4, char a5, int a6)
{
  _BYTE *v6; // r14
  _BYTE *v9; // rbx
  int v11; // r13d
  int v12; // eax
  char v13; // r8
  char *v14; // rax
  char v15; // dl
  char v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v6 = &a2[a3];
  LODWORD(v9) = (_DWORD)a2;
  v17 = __readfsqword(0x28u);
  *a2 = 0;
  if ( *(char *)(a1 + 33) < 0 )
  {
    v11 = a3;
    v12 = qsnprintf((_DWORD)a2, a3, (unsigned int)&unk_22D957B, a4 >> 3, a5, a6);
    v9 = &a2[v12];
    if ( (a5 & 1) != 0 )
      v9 += (int)qsnprintf((_DWORD)v9, v11 - v12, (unsigned int)".%d", a4 & 7, v13, a6);
    if ( v9 >= v6 )
    {
      if ( !under_debugger )
        interr(520);
      BUG();
    }
    v14 = (char *)&unk_22D9576;
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
    v16 = 0;
    if ( (a5 & 1) != 0 )
      qsnprintf((unsigned int)&v16, 8, (unsigned int)&unk_22D9586, a4 & 7, (unsigned __int8)&v16, a6);
    qsnprintf((_DWORD)v9, (_DWORD)v6 - (_DWORD)v9, (unsigned int)&unk_2343668, a4 >> 3, (unsigned __int8)&v16, a6);
  }
  return v17 - __readfsqword(0x28u);
}
