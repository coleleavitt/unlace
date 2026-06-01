void __fastcall sub_56CF60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12

  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(a1 + 24) )
      sub_56C9A0(a3, *(volatile signed __int32 **)(a1 + 24));
    if ( *(_QWORD *)(a1 + 32) )
      sub_56C9A0(a3, *(volatile signed __int32 **)(a1 + 32));
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      if ( *(_QWORD *)v4 )
      {
        off_8C52A0(*(void **)v4);
        *(_QWORD *)v4 = 0;
        *(_QWORD *)(v4 + 8) = 0;
        v4 = *(_QWORD *)(a1 + 8);
      }
      off_8C52A0((void *)v4);
    }
    sub_56CDC0(*(__m128i **)a1, a2, a3);
  }
}
