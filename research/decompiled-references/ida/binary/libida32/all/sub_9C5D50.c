__int64 __fastcall sub_9C5D50(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v1 + 2) <= 0xFu )
    return sub_EC7AA0(*(_QWORD *)(v1 + 16));
  else
    return *(unsigned int *)(v1 + 4);
}

