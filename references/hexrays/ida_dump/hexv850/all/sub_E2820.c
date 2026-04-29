char *__fastcall sub_E2820(__int64 a1, __int64 a2, char *a3)
{
  char v3; // al
  char *result; // rax
  __int64 v7; // rdi
  int v8; // edx
  _DWORD *v9; // rbp
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h]
  int *v12; // [rsp+10h] [rbp-48h]
  char *v13; // [rsp+18h] [rbp-40h]
  __int64 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v3 = *a3;
  v17 = __readfsqword(0x28u);
  if ( v3 == 3 || v3 == 10 && **((_BYTE **)a3 + 1) == 6 )
    return a3;
  if ( (unsigned __int8)sub_11B1C0(a3, 0, 1) )
    return a3;
  v7 = *(_QWORD *)(a1 + 64);
  v10 = a1;
  v11 = a2;
  v12 = nullptr;
  v13 = a3;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  sub_1255A0(v7, &v10, 1);
  if ( !v12 )
    return a3;
  result = v13;
  if ( *v13 == 4 )
    return a3;
  v8 = *v12;
  if ( *v12 != 4 )
  {
    if ( v8 == 67 )
    {
      if ( v12[17] != v12[9] )
        return a3;
    }
    else if ( (unsigned int)(v8 - 8) > 1 )
    {
      if ( v8 == 12 && *((_BYTE *)v12 + 32) == 4 )
      {
        v9 = *((_DWORD **)v12 + 5);
        if ( *v9 == 13 )
        {
          if ( (unsigned __int8)sub_129EC0(
                                  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                                  v10,
                                  v11,
                                  (int)v9 + 48,
                                  v11,
                                  (int)v12 + 48,
                                  0) )
            return (char *)(v9 + 8);
        }
      }
      return a3;
    }
  }
  if ( v16 != 1 && (v16 != 2 || *((_DWORD *)v13 + 1) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL)) )
    return a3;
  return result;
}
