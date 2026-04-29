__int64 __fastcall sub_147C20(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int8 v5; // dl
  char v7; // al
  unsigned int v8; // [rsp+Ch] [rbp-1Ch]

  v5 = a4;
  if ( (*(_BYTE *)(a1 + 605) & 4) == 0 )
    return sub_1196C0((char *)a3, a2, v5);
  if ( *(_BYTE *)a3 != 10 )
    return sub_1196C0((char *)a3, a2, v5);
  if ( **(_BYTE **)(a3 + 8) != 6 )
    return sub_1196C0((char *)a3, a2, v5);
  v8 = a4;
  v7 = sub_323350(a1);
  v5 = v8;
  if ( v7 )
    return sub_1196C0((char *)a3, a2, v5);
  *a2 = sub_323690(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(unsigned int *)(*(_QWORD *)(a1 + 112) + 84LL), v8);
  return 1;
}
