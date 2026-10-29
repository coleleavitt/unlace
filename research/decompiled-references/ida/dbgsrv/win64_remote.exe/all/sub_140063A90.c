/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063A90
// Address: 0x0000000140063A90

//----- (0000000140063A90) ----------------------------------------------------
unsigned __int8 *__fastcall sub_140063A90(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 *v10; // rdi
  unsigned __int8 *v11; // rdi
  size_t v12; // rax
  int v13; // eax
  unsigned __int8 Buffer; // [rsp+60h] [rbp+18h] BYREF

  if ( a4 > 0 )
  {
    v8 = 0;
    v9 = 0;
    if ( a2 != -1 )
    {
      if ( a1 )
      {
        v10 = (__int64 *)(a1 + 8);
        if ( *(int *)a1 < 2 )
        {
          if ( (unsigned int)sub_140064520(*v10) )
            v9 = -1;
          else
            v9 = sub_140064580(*v10);
        }
        else
        {
          v9 = *(_QWORD *)(a1 + 24);
        }
        if ( *(int *)a1 < 2 )
        {
          if ( !(unsigned int)sub_140064520(*v10) )
            sub_140064580(*v10);
        }
        else
        {
          *(_QWORD *)(a1 + 24) = a2;
        }
      }
      else
      {
        v9 = -1;
      }
    }
    v11 = a3;
    while ( ++v8 < (unsigned __int64)a4 && a1 )
    {
      v12 = *(int *)a1 < 2 ? sub_140064450(*(FILE **)(a1 + 8), &Buffer, 1) : sub_1400637A0(a1, &Buffer, 1);
      if ( v12 != 1 )
        break;
      v13 = Buffer;
      *v11++ = Buffer;
      if ( !v13 )
        goto LABEL_24;
    }
    *v11 = 0;
LABEL_24:
    if ( a2 != -1 && a1 )
    {
      if ( *(int *)a1 < 2 )
      {
        if ( !(unsigned int)sub_140064520(*(_QWORD *)(a1 + 8)) )
          sub_140064580(*(_QWORD *)(a1 + 8));
      }
      else
      {
        *(_QWORD *)(a1 + 24) = v9;
      }
    }
  }
  return a3;
}
