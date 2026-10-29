void __fastcall sub_8BC920(__int64 a1)
{
  __int64 v1; // rbx

  if ( *(_DWORD *)(a1 + 16) != -1 )
  {
    v1 = *(unsigned __int64 *)((char *)&stru_64010.r_offset + a1);
    do
    {
      while ( !*(_BYTE *)(v1 + 28) )
      {
        v1 = *(_QWORD *)(v1 + 16);
        if ( v1 == *(unsigned __int64 *)((char *)&stru_64010.r_offset + a1) )
          goto LABEL_7;
      }
      sub_8BC840(a1, v1);
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 != *(unsigned __int64 *)((char *)&stru_64010.r_offset + a1) );
LABEL_7:
    if ( (unsigned int)qclose(*(unsigned int *)(a1 + 16)) == -1 )
      off_2C820C0(a1, "Closing file", 0);
  }
  qfree(*(void **)(a1 + 409632));
  qfree(*(void **)(a1 + 409624));
}
