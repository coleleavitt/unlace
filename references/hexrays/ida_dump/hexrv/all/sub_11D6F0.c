__int64 __fastcall sub_11D6F0(__int64 a1, char *a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  char v8; // al
  _QWORD *v10; // rsi
  unsigned int v11; // r12d
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v16[3] = __readfsqword(0x28u);
  v7 = *((int *)a2 + 1);
  if ( (_DWORD)v7 == -1 )
    return 0;
  v8 = *a2;
  if ( *(_BYTE *)a1 != 6 )
  {
    v16[0] = 0;
    v16[1] = 0;
    if ( v8 == 15 )
    {
      v10 = *((_QWORD **)a2 + 1);
      if ( v10 )
        goto LABEL_6;
    }
    else if ( (unsigned __int8)sub_1C09B0(a2, v16) )
    {
      LODWORD(v7) = *((_DWORD *)a2 + 1);
      v10 = v16;
LABEL_6:
      v11 = sub_11D610(a1, (__int64)v10, v7, a3, a5, a6);
LABEL_7:
      cleanup_argloc(v16);
      return v11;
    }
    v11 = 0;
    goto LABEL_7;
  }
  v11 = 0;
  if ( v8 == 6 )
  {
    v13 = *(int *)(a1 + 4);
    v14 = *((_QWORD *)a2 + 1);
    v15 = *(_QWORD *)(a1 + 8);
    LOBYTE(v11) = v14 >= v15 && v13 != 0;
    if ( (_BYTE)v11 )
    {
      if ( v13 + v15 - 1 >= v14 + v7 - 1 )
      {
        if ( a3 )
          *a3 = v14 - v15;
        return v11;
      }
      return 0;
    }
  }
  return v11;
}
