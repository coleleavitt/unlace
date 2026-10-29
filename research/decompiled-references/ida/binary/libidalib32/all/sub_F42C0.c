__int64 __fastcall sub_F42C0(__int64 a1)
{
  void (*v1)(void); // rax
  __int64 first_seg; // rbx
  int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  float v8; // xmm0_4
  __int64 result; // rax

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 720LL);
  if ( v1 != nullsub_43 )
    v1();
  if ( *(_QWORD *)(a1 + 1160) )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree();
    *(_QWORD *)(a1 + 1160) = 0;
    *(_QWORD *)(a1 + 1176) = 0;
  }
  first_seg = get_first_seg();
  if ( first_seg )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(a1 + 1168);
      v5 = *(_QWORD *)first_seg;
      v6 = *(_QWORD *)(a1 + 1160);
      if ( *(_QWORD *)(a1 + 1176) < (unsigned __int64)(v4 + 1) )
      {
        v7 = qvector_reserve();
        *(_QWORD *)(a1 + 1160) = v7;
        v6 = v7;
        v4 = *(_QWORD *)(a1 + 1168);
      }
      *(_QWORD *)(v6 + 8 * v4) = v5;
      ++*(_QWORD *)(a1 + 1168);
      v3 = *(_DWORD *)(first_seg + 4) + v3 - *(_DWORD *)first_seg;
      first_seg = get_next_seg();
    }
    while ( first_seg );
  }
  else
  {
    v3 = 0;
  }
  v8 = 1.0;
  result = *(unsigned int *)(*(_QWORD *)(a1 + 968) + 100LL);
  if ( (_DWORD)result )
    v8 = (float)v3 / (float)(int)result;
  *(float *)(a1 + 1184) = v8;
  return result;
}

