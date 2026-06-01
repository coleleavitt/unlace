__int64 __fastcall sub_1AF3D40(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  char v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 **v24; // rdx
  unsigned __int64 v25; // rbp
  __int64 v26; // r13
  unsigned __int64 v27; // r12
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // [rsp+8h] [rbp-60h]
  unsigned __int64 v37; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v38[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+30h] [rbp-38h]

  result = sub_B8E180(*(_QWORD *)(*a1 + 544));
  if ( !(_BYTE)result )
  {
    v4 = sub_1AE5FF0(a1[1]);
    v5 = v4 ? *(_DWORD *)(v4 + 976) : 103;
    if ( sub_FFE8A0(v5)
      || ((v7 = sub_1AE5FF0(a1[1])) == 0 ? (v9 = 103) : (v9 = *(_DWORD *)(v7 + 976)),
          result = sub_FFEA00(v9, a2, v8),
          (_BYTE)result) )
    {
      v10 = *(_QWORD *)(a2 + 48);
      v11 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
      LOBYTE(v10) = v11 | v10;
      v11 &= 0xFFFFFFFFFFFFFFF8LL;
      v38[0] = v11 | v10 & 7;
      v12 = sub_C1BEF0((__int64)v38, a2, v11, v6);
      result = (__int64)sub_F63270(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v14, v15, v16);
      if ( result )
      {
        v20 = a1[1];
        v21 = *(_BYTE *)(v20 + 27473);
        *(_BYTE *)(v20 + 27473) = 1;
        v22 = *(_QWORD *)(result + 128);
        if ( v22 && (*(_BYTE *)(v22 + 10) & 0x20) != 0 )
        {
          v36 = result;
          v38[0] = 0;
          v38[1] = 0;
          v39 = 0;
          sub_BA4FF0(result, (__int64)v38, &v37, v17, v18, v19);
          v23 = *(_QWORD *)(v36 + 128);
          if ( v23 && (*(_BYTE *)(v23 + 10) & 0x20) != 0 )
          {
            v24 = (unsigned __int64 **)(*(_QWORD *)(v23 + 128) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v23 + 128) & 4) != 0 )
            {
              v35 = 0;
              if ( *((_DWORD *)v24 + 2) )
                v35 = **v24;
              v25 = 0;
              v26 = v35 + 16LL * ((*(_DWORD *)(v23 + 104) >> 5) & 0x7FFF);
              if ( *((_DWORD *)v24 + 2) )
                v25 = **v24;
            }
            else if ( v24 )
            {
              v25 = *(_QWORD *)(v23 + 128) & 0xFFFFFFFFFFFFFFF8LL;
              v26 = (__int64)&v24[2 * ((*(_DWORD *)(v23 + 104) >> 5) & 0x7FFF)];
            }
            else
            {
              v25 = 0;
              v26 = 16LL * ((*(_DWORD *)(v23 + 104) >> 5) & 0x7FFF);
            }
            for ( ; v26 != v25; v25 += 16LL )
            {
              if ( (unsigned int)sub_C94E40((__int64 *)v25) == 3 )
              {
                v27 = *(_QWORD *)v25 & 0xFFFFFFFFFFFFFFF8LL;
                v28 = (_QWORD *)(*(_QWORD *)(v27 + 16) & 0xFFFFFFFFFFFFFFF8LL);
                if ( (*(_QWORD *)(v27 + 16) & 4) != 0 )
                  v28 = (_QWORD *)*v28;
                if ( (unsigned __int8)sub_B91990((__int64)v28, *(_QWORD *)(*a1 + 544), v29, v30, v31, v32) )
                  sub_1907590((__m128 *)*a1, *(_DWORD *)(v25 + 8), v27);
              }
              else if ( !(unsigned int)sub_C94E40((__int64 *)v25) )
              {
                v33 = sub_19A27D0(*a1);
                if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                {
                  v34 = sub_168B6C0((__int64)a1);
                  if ( sub_AAC110(v34, v33, *(_QWORD *)(v37 + 48), 0) )
                    sub_19B4460(*a1, (const __m128i *)*(unsigned int *)(v25 + 8), 0, 1u, nullptr, 0);
                }
              }
            }
          }
          operator delete(v38[0], 16LL * v39, 8);
        }
        result = a1[1];
        *(_BYTE *)(result + 27473) = v21;
      }
    }
  }
  return result;
}
