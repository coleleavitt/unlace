__int64 __fastcall sub_E56700(_QWORD *a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  _BYTE *v4; // rsi
  unsigned __int64 v5; // r13
  _BYTE *v6; // r12
  char v7; // r14
  __int64 v8; // rdi
  _BYTE *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // rdx
  _QWORD *v13; // rdi
  __int64 v15; // r12
  void *v16; // rdi
  _BYTE v17[16]; // [rsp+0h] [rbp-118h] BYREF
  void *ptr; // [rsp+10h] [rbp-108h] BYREF
  __m128i si128; // [rsp+18h] [rbp-100h]
  _BYTE v20[40]; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v21[200]; // [rsp+50h] [rbp-C8h] BYREF

  *a1 = &off_2BDAF98;
  v2 = a1[6];
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_BYTE **)v2;
  if ( v3 )
  {
    if ( *v4 == 1 )
    {
      v5 = v3 - 1;
      v6 = v4 + 1;
      v7 = 1;
    }
    else
    {
      v6 = *(_BYTE **)v2;
      v5 = *(_QWORD *)(v2 + 8);
      v7 = 0;
    }
    if ( v5 <= 0xFFF )
    {
      v15 = a1[7];
      v16 = *(void **)(v15 + 32);
      if ( v3 <= *(_QWORD *)(v15 + 24) - (_QWORD)v16 )
      {
        memcpy(v16, v4, *(_QWORD *)(v2 + 8));
        *(_QWORD *)(v15 + 32) += v3;
      }
      else
      {
        sub_22581D0(a1[7], v4, *(_QWORD *)(v2 + 8));
      }
    }
    else
    {
      sub_220E040(v21);
      sub_220E260(v21, v6, v5);
      sub_220E460(v21, v17);
      ptr = v20;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
      sub_220E610(v17, &ptr);
      if ( v7 )
      {
        v8 = a1[7];
        v9 = *(_BYTE **)(v8 + 32);
        if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 24) )
        {
          sub_2257CD0(v8, 1);
        }
        else
        {
          *(_QWORD *)(v8 + 32) = v9 + 1;
          *v9 = 1;
        }
      }
      v10 = sub_971800(a1[7], "??@");
      v11 = sub_22581D0(v10, ptr, si128.m128i_i64[0]);
      v12 = *(_BYTE **)(v11 + 32);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
      {
        sub_2257CD0(v11, 64);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v12 + 1;
        *v12 = 64;
      }
      if ( ptr != v20 )
        free(ptr);
    }
  }
  v13 = (_QWORD *)a1[8];
  if ( v13 != a1 + 11 )
    free(v13);
  *a1 = &unk_2C4C288;
  return sub_2257A60(a1);
}

