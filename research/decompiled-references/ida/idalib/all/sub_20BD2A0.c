void __fastcall sub_20BD2A0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r12
  _QWORD *v3; // rdx
  __int64 v4; // rbp
  __m128 v5[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = ***(_QWORD ***)(a1 + 8);
  v2 = (_QWORD *)sub_20AC080(v1 + 496, a1);
  v3 = (_QWORD *)(*(_QWORD *)(v1 + 496) + 16LL * *(unsigned int *)(v1 + 512));
  sub_2093920(v5, v3, v3, v1 + 496, 1);
  if ( (_QWORD *)v5[0].m128_u64[0] != v2 )
  {
    v4 = v2[1];
    *v2 = -8192;
    --*(_DWORD *)(v1 + 504);
    ++*(_DWORD *)(v1 + 508);
    if ( *(_DWORD *)(v4 + 24) >> 1 )
    {
      sub_20BCEC0(v4 + 8, nullptr);
      if ( (*(_BYTE *)(v4 + 24) & 1) != 0 )
        goto LABEL_4;
    }
    else if ( (*(_BYTE *)(v4 + 24) & 1) != 0 )
    {
LABEL_4:
      operator delete((void *)v4, 0x88u);
      return;
    }
    operator delete(*(_QWORD *)(v4 + 32), 24LL * *(unsigned int *)(v4 + 40), 8);
    goto LABEL_4;
  }
}
