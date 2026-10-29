/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F680
// Address: 0x000000000047F680

//----- (000000000047F680) ----------------------------------------------------
void __fastcall sub_47F680(void *a1)
{
  FILE *v2; // rdi

  if ( a1 )
  {
    v2 = *((FILE **)a1 + 1);
    if ( *(int *)a1 <= 1 )
    {
      sub_480D70(v2);
      operator delete(a1, 0x38u);
    }
    else
    {
      if ( v2 )
        (*(void (__fastcall **)(FILE *))(*(_QWORD *)&v2->_flags + 16LL))(v2);
      j__free(*((void **)a1 + 5));
      j__free(*((void **)a1 + 4));
      operator delete(a1, 0x38u);
    }
  }
}
