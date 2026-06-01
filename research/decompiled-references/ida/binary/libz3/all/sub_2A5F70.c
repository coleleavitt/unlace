__int64 __fastcall sub_2A5F70(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 512);
  if ( v1 )
    return *(unsigned int *)(v1 - 4);
  else
    return 0;
}

