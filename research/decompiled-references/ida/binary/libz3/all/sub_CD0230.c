__int64 __fastcall sub_CD0230(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
    return *(unsigned int *)(v1 - 4);
  else
    return 0;
}

