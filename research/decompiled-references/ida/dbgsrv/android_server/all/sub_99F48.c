/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99F48
// Address: 0x0000000000099F48

//----- (0000000000099F48) ----------------------------------------------------
void __fastcall sub_99F48(__int64 a1, __int64 *a2, int a3)
{
  pthread_mutex_t *v3; // x20

  v3 = (pthread_mutex_t *)(a1 + 48);
  sub_39B38((__int64 *)(a1 + 48), 0);
  if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)a3 )
    v3->__align = (__int64)qvector_reserve(v3, (void *)v3->__align, a3, 0x38u);
  if ( a3 >= 1 )
  {
    do
    {
      sub_99FC8(v3, a2);
      --a3;
      a2 += 7;
    }
    while ( a3 );
  }
}
