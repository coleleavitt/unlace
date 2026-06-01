unsigned __int64 __fastcall sub_1F6C20(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v4; // r14
  int v6; // edx
  int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i v11; // xmm0
  int v12; // eax
  __int64 v13; // rax
  QT::QWidget *v15; // rdi
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+8h] [rbp-70h] BYREF
  char v20[8]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-58h]
  char v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int16 v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 88);
  v25 = __readfsqword(0x28u);
  nullsub_66(a1 + 104);
  sub_277E70(&v18, a1 + 104);
  v6 = 2;
  v7 = *(_BYTE *)(a2 + 35) & 2;
  if ( *(_DWORD *)(a2 + 68) != 1 )
    v6 = 3;
  v8 = a1;
  sub_1E95D0((QT::QObject *)v20, a1, v6, v7, -32768, a3);
  *(_BYTE *)(a2 + 12) = 1;
  v11 = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(a1 + 812)), (__m128i)v4);
  *(_QWORD *)(a1 + 812) = v11.m128i_i64[0];
  v12 = _mm_cvtsi128_si32(v11);
  while ( v12 || *(_DWORD *)(a1 + 816) )
  {
    v19 = *(_QWORD *)(a1 + 812);
    v15 = qword_8CCE70;
    if ( !qword_8CCE70
      || *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) >= 0
      || (v8 = a2, !(unsigned __int8)sub_2D3570(qword_8CCE70, a2, &v19)) )
    {
      if ( *(_BYTE *)(a1 + 968) )
      {
        if ( !*(_QWORD *)(a1 + 424) )
          sub_1E69C0(*(double *)v11.m128i_i64, (__int64)v15, v8, v9, v10);
        v16 = *(_DWORD *)(a1 + 416);
        if ( v16 == 2 )
        {
          v17 = *(_QWORD *)(a1 + 896);
        }
        else if ( v16 == 3 )
        {
          v17 = *(_QWORD *)(a1 + 904);
        }
        else
        {
          v17 = 0;
          if ( v16 == 1 )
            v17 = *(_QWORD *)(a1 + 888);
        }
      }
      else
      {
        v17 = 0;
      }
      v8 = a2;
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v17 + 440LL))(v17, a2, v19);
    }
    if ( v19 == *(_QWORD *)(a1 + 812) )
      break;
    v12 = v19;
    *(_QWORD *)(a1 + 812) = v19;
  }
  if ( !v22 )
  {
    v13 = v21;
    if ( v21 )
    {
      *(_QWORD *)(v21 + 948) = v23;
      *(_WORD *)(v13 + 956) = v24;
    }
  }
  *(_QWORD *)v20 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v20);
  sub_278AD0(&v18);
  return v25 - __readfsqword(0x28u);
}
