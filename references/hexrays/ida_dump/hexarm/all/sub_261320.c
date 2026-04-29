__int64 __fastcall sub_261320(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int **v4; // rbx
  unsigned int *v5; // rsi
  int v6; // edx

  LODWORD(result) = 11;
  v4 = (unsigned int **)&off_4DA6E0;
  v5 = (unsigned int *)&unk_4274E0;
  while ( 1 )
  {
    do
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 752LL + ((unsigned __int64)(int)result >> 3));
      if ( _bittest(&v6, result & 7) )
      {
        result = (**(__int64 (__fastcall ***)(__int64, _QWORD, void *, unsigned int *))a2)(a2, 0, &unk_418B00, v4[1]);
        ++*(_DWORD *)(a2 + 32);
        break;
      }
      result = v5[1];
      ++v5;
    }
    while ( (_DWORD)result != -1 );
    v4 += 2;
    if ( &off_4DA720 == (_UNKNOWN **)v4 )
      return result;
    while ( 1 )
    {
      v5 = *v4;
      result = **v4;
      if ( (_DWORD)result != -1 )
        break;
      v4 += 2;
      if ( &off_4DA720 == (_UNKNOWN **)v4 )
        return result;
    }
  }
}
