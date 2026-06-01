/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75290
// Address: 0x0000000000075290

//----- (0000000000075290) ----------------------------------------------------
__int64 __fastcall sub_75290(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 8;
  v4 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 != a2 + 8 )
  {
    do
    {
      sub_80350((_QWORD **)a1, (_QWORD *)(a1 + 8), (__int64)(v4 + 4), (__int64)(v4 + 4), 0.0, a4);
      v5 = (_QWORD *)v4[1];
      if ( v5 )
      {
        do
        {
          v6 = v5;
          v5 = (_QWORD *)*v5;
        }
        while ( v5 );
      }
      else
      {
        v6 = (_QWORD *)v4[2];
        if ( (_QWORD *)*v6 != v4 )
        {
          v7 = (__int64)(v4 + 2);
          do
          {
            v6 = *(_QWORD **)(*(_QWORD *)v7 + 16LL);
            v8 = *v6 == *(_QWORD *)v7;
            v7 = *(_QWORD *)v7 + 16LL;
          }
          while ( !v8 );
        }
      }
      v4 = v6;
    }
    while ( v6 != (_QWORD *)(a2 + 8) );
  }
  *(_DWORD *)(a1 + 24) = 1;
  result = *(unsigned int *)(a2 + 28);
  *(_DWORD *)(a1 + 28) = result;
  return result;
}
