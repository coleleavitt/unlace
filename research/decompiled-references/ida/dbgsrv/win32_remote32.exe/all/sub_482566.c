/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482566
// Address: 0x00482566

//----- (00482566) --------------------------------------------------------
int *__usercall sub_482566@<eax>(int a1@<ebp>, int a2, int a3, __int16 *a4)
{
  __int16 v4; // cx
  char v5; // di
  __int16 v6; // fps
  int *result; // eax
  unsigned int v8; // [esp-94h] [ebp-A0h]
  unsigned int v9; // [esp-84h] [ebp-90h] BYREF
  double v10[8]; // [esp-80h] [ebp-8Ch] BYREF
  unsigned int v11; // [esp-40h] [ebp-4Ch]
  int v12; // [esp+0h] [ebp-Ch]
  void *v13; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v12 = a1;
  v13 = retaddr;
  v4 = *a4;
  v9 = (unsigned __int16)*a4;
  switch ( *(_DWORD *)a3 )
  {
    case 1:
      goto LABEL_11;
    case 2:
      v8 = 4;
      break;
    case 3:
      v8 = 17;
      break;
    case 4:
      v8 = 18;
      break;
    case 5:
LABEL_11:
      v8 = 8;
      break;
    case 8:
      v8 = 16;
      break;
    default:
      goto LABEL_19;
  }
  v5 = v8;
  if ( !sub_47754E(v8, (double *)(a3 + 24), v4) )
  {
    if ( a2 == 16 || a2 == 22 || a2 == 29 )
    {
      v10[6] = *(double *)(a3 + 16);
      v11 = v11 & 0xFFFFFFE0 | 3;
    }
    else
    {
      v11 &= ~1u;
    }
    sub_477739(v6, (ULONG_PTR)v10, &v9, v5, a2, (float *)(a3 + 8), (float *)(a3 + 24));
  }
LABEL_19:
  sub_47E160();
  if ( *(_DWORD *)a3 == 8 )
    return sub_477A52(*(_DWORD *)a3);
  if ( !sub_477B72() )
    return sub_477A52(*(_DWORD *)a3);
  result = (int *)sub_477B99(a3);
  if ( !result )
    return sub_477A52(*(_DWORD *)a3);
  return result;
}
// 482566: could not find valid save-restore pair for ebp
