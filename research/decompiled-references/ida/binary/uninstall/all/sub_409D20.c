__int64 __fastcall sub_409D20(__int64 a1, unsigned int a2, _QWORD *a3, int a4)
{
  int v6; // r14d
  unsigned int v8; // ebp
  int v9; // r14d
  __int64 result; // rax
  int v11; // edx
  int v12; // esi
  int *v13; // r12
  __int64 v14; // rax
  int v15; // eax
  bool v16; // zf
  unsigned int v17; // [rsp+4h] [rbp-34h] BYREF

  ++*(_DWORD *)(a1 + 152);
  v6 = *(_DWORD *)(a1 + 324);
  v8 = sub_4093F0(a1, a2, a3, 0, 0, a4);
  v9 = v6 & 4;
  result = 0;
  v11 = *(_DWORD *)(a1 + 152) - 1;
  *(_DWORD *)(a1 + 152) = v11;
  if ( v8 )
  {
    if ( v11 )
      goto LABEL_6;
    if ( v8 == 2 )
      v8 = sub_488CA0(a1);
    if ( v9 == 0 && v8 != 1 )
    {
      v12 = v8;
      v8 = 1;
      sub_409C80(a1, v12);
    }
    else
    {
LABEL_6:
      if ( v8 != 1 )
        return v8;
    }
    if ( (a4 & 0x80000) == 0 )
    {
      v13 = (int *)sub_46EEB0(a2, a3);
      v14 = sub_47ACD0(v13, &v17);
      sub_479E00(a1, v14, v14, v17);
      v15 = *v13 - 1;
      v16 = *v13 == 1;
      *v13 = v15;
      if ( v15 < 0 || v16 )
      {
        sub_47B120(v13);
        return v8;
      }
    }
    return v8;
  }
  return result;
}

