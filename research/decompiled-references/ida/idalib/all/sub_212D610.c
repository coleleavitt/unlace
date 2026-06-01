unsigned __int64 __fastcall sub_212D610(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdi
  __int64 (*v9)(); // rax
  unsigned __int64 result; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  __m128i v22[3]; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v23[2]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v24; // [rsp+50h] [rbp-68h]
  __m128i v25; // [rsp+60h] [rbp-58h] BYREF
  __int64 v26; // [rsp+70h] [rbp-48h]
  __int64 v27; // [rsp+78h] [rbp-40h]
  __int16 v28; // [rsp+80h] [rbp-38h]

  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(__int64 (**)())(*(_QWORD *)v8 + 168LL);
  if ( v9 == sub_2128DC0
    || (result = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD))v9)(
                   v8,
                   a2,
                   a3,
                   *(_QWORD *)(a1 + 16))) == 0 )
  {
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v11 = sub_212D610(a1, *(_QWORD *)(a2 + 16), a3);
        v12 = sub_212D610(a1, *(_QWORD *)(a2 + 24), a3);
        if ( !(v12 | v11) )
          goto LABEL_3;
        if ( v11 )
        {
          if ( !v12 )
            v12 = *(_QWORD *)(a2 + 24);
        }
        else
        {
          v11 = *(_QWORD *)(a2 + 16);
        }
        result = sub_210EB10(*(_DWORD *)a2 >> 8, v11, v12, *(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 8), v13);
        break;
      case 1:
      case 4:
      case 5:
        goto LABEL_3;
      case 2:
        if ( (*(_DWORD *)a2 & 0xFFFF00) != 0 )
        {
          v23[0].m128i_i64[0] = (__int64)"' (already modified)";
          v24 = 259;
          v17 = sub_2153C00(a1);
          if ( *(_DWORD *)v17 == 2 )
          {
            v20 = *(_QWORD *)(v17 + 8);
            v21 = *(_QWORD *)(v17 + 16);
          }
          else
          {
            v20 = sub_212C8F0(v17);
          }
          v27 = v21;
          v28 = 1283;
          v25.m128i_i64[0] = (__int64)"invalid variant on expression '";
          v26 = v20;
          sub_A41580(v22, &v25, v23, v20, v18, v19);
          sub_21543E0(a1, v22, 0, 0);
          result = a2;
        }
        else
        {
          result = sub_210EA90(*(_QWORD *)(a2 + 16), a3, *(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 8), a5, a6);
        }
        break;
      case 3:
        v14 = sub_212D610(a1, *(_QWORD *)(a2 + 16), a3);
        if ( v14 )
          result = sub_210EA10(*(_DWORD *)a2 >> 8, v14, *(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 8), v15, v16);
        else
LABEL_3:
          result = 0;
        break;
    }
  }
  return result;
}
