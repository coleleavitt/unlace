/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A1B50
// Address: 0x00000000000A1B50

//----- (00000000000A1B50) ----------------------------------------------------
__int64 __fastcall sub_A1B50(__int64 a1, signed int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13[3]; // [rsp+10h] [rbp-68h] BYREF
  __int128 v14; // [rsp+28h] [rbp-50h]
  char v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+40h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 312);
  v3 = -1;
  if ( v2 )
  {
    v4 = a1 + 312;
    do
    {
      if ( *(_DWORD *)(v2 + 32) >= a2 )
        v4 = v2;
      v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < a2));
    }
    while ( v2 );
    if ( v4 != a1 + 312 && *(_DWORD *)(v4 + 32) <= a2 )
    {
      v5 = *(_QWORD *)(v4 + 48);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v4 + 40);
        v7 = 48 * (v5 - 1);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 480LL))(a1, (unsigned int)a2) )
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 320LL))(
            a1,
            4,
            *(_QWORD *)(v6 + v7 + 32),
            *(_QWORD *)(a1 + 408),
            *(unsigned int *)(a1 + 416));
          if ( *(_BYTE *)(v6 + v7 + 40)
            && !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 440LL))(
                  a1,
                  (unsigned int)a2,
                  0,
                  *(unsigned int *)(v6 + v7 + 8),
                  *(_QWORD *)(v7 + v6)) )
          {
            sub_391F0(a1, "Failed to restore %zu registers!\n", *(_QWORD *)(v7 + v6 + 8));
          }
          else
          {
            v8 = *(_QWORD *)(v4 + 40);
            v9 = 48LL * *(_QWORD *)(v4 + 48);
            sub_A3AC0(v13, (__int64 *)(v8 + v9 - 48));
            v15 = *(_BYTE *)(v8 + v9 - 8);
            v14 = *(_OWORD *)(v8 + v9 - 24);
            v10 = *(_QWORD *)(v4 + 48);
            if ( v10 )
            {
              v11 = v10 - 1;
              *(_QWORD *)(v4 + 48) = v11;
              sub_9AA40(*(_QWORD *)(v4 + 40) + 48 * v11);
            }
            sub_9AA40((__int64)v13);
            if ( !*(_QWORD *)(v4 + 48) )
              sub_A3B80(a1 + 304, (__int64 *)v4);
            return 2 * (unsigned int)(*(_QWORD *)(a1 + 160) != 0) + 1;
          }
        }
      }
    }
  }
  return v3;
}
