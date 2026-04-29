__int64 __fastcall sub_3E6AC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  unsigned int v6; // r15d
  unsigned int v11; // eax
  int v12; // edx
  int *v13; // rax
  int v14; // esi
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-B8h]
  __int64 v26; // [rsp+38h] [rbp-B0h]
  __int64 v27; // [rsp+50h] [rbp-98h] BYREF
  __int64 v28; // [rsp+58h] [rbp-90h]
  __int64 v29; // [rsp+60h] [rbp-88h] BYREF
  __m128i v30; // [rsp+68h] [rbp-80h] BYREF
  __int64 v31[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 *v32; // [rsp+90h] [rbp-58h] BYREF
  __int128 v33; // [rsp+98h] [rbp-50h]
  unsigned __int64 v34; // [rsp+A8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( a3 || !(unsigned __int8)sub_3342E0((unsigned __int64)&v22, &v23, a2) )
  {
    return 0;
  }
  else
  {
    sub_3340B0((__int64)v24, a2, v22, v23);
    LOBYTE(v11) = sub_605B0(v24, **(_DWORD **)(a1 + 680));
    v6 = v11;
    if ( (_BYTE)v11 && (v12 = sub_60820(v24, **(_DWORD **)(a1 + 680)), *(_DWORD *)(a1 + 692) >= v12) )
    {
      v13 = *(int **)(a1 + 680);
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v14 = *v13;
      v31[0] = 0;
      v31[1] = 0;
      sub_5FB00(v31, v14, v12);
      v32 = nullptr;
      v33 = 0;
      sub_5FF00(&v27, v31);
      sub_311BB0(&v29, &v32);
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
      qfree(v31[0]);
      sub_36E310(a2);
      v15 = sub_11E770((__int64)&v27, a5);
      v16 = v29;
      if ( v15 )
      {
        v17 = *(_QWORD *)a5;
        v18 = _mm_loadu_si128(&v30);
        *(_QWORD *)a5 = v27;
        v27 = v17;
        v19 = *(_QWORD *)(a5 + 8);
        *(_QWORD *)(a5 + 8) = v28;
        v20 = *(_QWORD *)(a5 + 32);
        v28 = v19;
        v21 = *(_QWORD *)(a5 + 16);
        *(__m128i *)(a5 + 24) = v18;
        *(_QWORD *)(a5 + 16) = v16;
        v16 = v21;
        v29 = v21;
        v30.m128i_i64[1] = v20;
        *a6 = 1;
      }
      if ( v16 )
      {
        v30.m128i_i64[0] = 0;
        qfree(v16);
      }
      qfree(v27);
    }
    else
    {
      v6 = 0;
    }
    if ( v25 )
    {
      v26 = 0;
      qfree(v25);
    }
    qfree(v24[0]);
  }
  return v6;
}
