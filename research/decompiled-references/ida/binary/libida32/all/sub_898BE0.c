void __fastcall sub_898BE0(__int64 a1)
{
  __int64 v1; // rbx

  if ( *(_DWORD *)(a1 + 16) != -1 )
  {
    v1 = *(_QWORD *)(a1 + 409616);
    do
    {
      while ( !*(_BYTE *)(v1 + 28) )
      {
        v1 = *(_QWORD *)(v1 + 16);
        if ( v1 == *(_QWORD *)(a1 + 409616) )
          goto LABEL_7;
      }
      sub_898B00(a1, v1);
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 != *(_QWORD *)(a1 + 409616) );
LABEL_7:
    if ( (unsigned int)qclose(*(unsigned int *)(a1 + 16)) == -1 )
      off_2C581C0(a1, "Closing file", 0);
  }
  qfree(*(void **)(a1 + 409632));
  qfree(*(void **)((char *)&stru_64018.r_offset + a1));
}

