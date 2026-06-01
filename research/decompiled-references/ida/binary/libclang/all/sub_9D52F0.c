bool __fastcall sub_9D52F0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  bool result; // al
  __int64 v7; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rdx
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  unsigned __int8 **v16; // rax
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-40h] BYREF
  __int64 v20; // [rsp+8h] [rbp-38h] BYREF
  char v21; // [rsp+10h] [rbp-30h]

  result = 1;
  if ( !*(_DWORD *)(a3 + 48) )
  {
    v7 = *(_QWORD *)(a3 + 24);
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 32);
      v10 = *(_DWORD *)(a3 + 32);
      if ( *(_DWORD *)(v9 + 16) != v10 && v10 )
        v11 = *(_QWORD *)(v7 + v10 + 32);
      else
        v11 = *(_QWORD *)(v7 + 32);
      result = 1;
      if ( *(_DWORD *)(v11 + 12) != -1 )
      {
        v12 = *(_QWORD *)a3;
        if ( *(_QWORD *)a3 == 0xFFFFFFFFLL || *(unsigned int *)(v9 + 20) < v12 )
          goto LABEL_17;
        v13 = sub_8E5480(a3);
        v14 = v12;
        if ( v10 != -1 )
        {
          v15 = 0;
          if ( v12 != v10 )
          {
            v15 = 32;
            if ( *(_QWORD *)(v13 + 32) )
              v15 = 16;
          }
          v14 = v12 - v10 - v15;
        }
        result = *(_DWORD *)(v13 + 12) == 0 || *(_DWORD *)(v13 + 12) != v14;
        if ( !result )
        {
LABEL_17:
          if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0 )
          {
            v19 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
            v16 = (unsigned __int8 **)sub_A2E0C0(a1, &v19, 2169, 0);
            v17 = (__int64 *)v16;
            if ( v16 )
            {
              sub_9B5410(v16, a4);
              v18 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
              v21 = 1;
              v20 = v18;
              sub_839C90(v17, &v20);
            }
            else
            {
              sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
            }
            return 0;
          }
          else
          {
            return 0;
          }
        }
      }
    }
  }
  return result;
}

