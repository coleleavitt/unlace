void __fastcall sub_181F070(__int64 a1, _QWORD *a2, const __m128i *a3, __m128i a4, double a5)
{
  bool v6; // zf
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // r8d
  unsigned __int64 v10; // rdx
  unsigned __int32 v11; // r8d
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  _BYTE *v17; // r12
  __m128i *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // [rsp+14h] [rbp-114h]
  unsigned __int32 v25; // [rsp+14h] [rbp-114h]
  int v26; // [rsp+28h] [rbp-100h] BYREF
  unsigned int v27; // [rsp+2Ch] [rbp-FCh] BYREF
  unsigned int *v28; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-F0h]
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-E0h]
  _BYTE v32[16]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v33[200]; // [rsp+60h] [rbp-C8h] BYREF

  if ( (unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) && (unsigned __int8)sub_1818E60(a1, a2, (__int64)a3) )
  {
    v6 = a3[3].m128i_i16[4] == 0;
    ptr = v32;
    v31 = 0x300000000LL;
    if ( v6 )
    {
      v17 = v32;
      v11 = 0;
LABEL_14:
      v25 = v11;
      v18 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
      sub_B2E100(v18, *(_QWORD *)(a1 + 248), a3, v17, v25);
      sub_B8CC60((__int64)a2, (__int64)v18, v19, v20, v21, v22);
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        v13 = a3[5].m128i_i64[v7];
        v27 = 0;
        v28 = nullptr;
        v29 = 0;
        if ( (v13 & 2) != 0 )
        {
          v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
          v15 = *(unsigned int **)(*(_QWORD *)(v14 + 8) + 16LL);
          v16 = *v15;
          v27 = *(_DWORD *)v14;
          v28 = v15 + 4;
          v29 = v16;
        }
        else if ( !(unsigned __int8)sub_181EB00(a1, (__int64)a3, v7, &v28, &v27, a4, a5) )
        {
          goto LABEL_15;
        }
        if ( !(unsigned __int8)sub_B0EE30((__int64)v28, v29, &v26) )
          break;
        v8 = (unsigned int)v31;
        v9 = v26;
        v10 = (unsigned int)v31 + 1LL;
        if ( v10 > HIDWORD(v31) )
        {
          v24 = v26;
          sub_2237220(&ptr, v32, v10, 4);
          v8 = (unsigned int)v31;
          v9 = v24;
        }
        ++v7;
        *((_DWORD *)ptr + v8) = v9;
        v11 = v31 + 1;
        v12 = a3[3].m128i_u16[4];
        LODWORD(v31) = v31 + 1;
        if ( v12 <= (unsigned int)v7 )
        {
          v17 = ptr;
          goto LABEL_14;
        }
      }
      sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), v27, 0x19C0u, 0);
      v23 = sub_15DD120((__int64)v33, (__int64)a3);
      sub_1682BA0(v23, (__int64)&v28);
      sub_15F7200(v33);
    }
LABEL_15:
    if ( ptr != v32 )
      free(ptr);
  }
}
