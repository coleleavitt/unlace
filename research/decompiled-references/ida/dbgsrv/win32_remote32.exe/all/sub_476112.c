/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476112
// Address: 0x00476112

//----- (00476112) --------------------------------------------------------
int __usercall sub_476112@<eax>(int *a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  int v3; // ebp
  int v5; // eax
  int v6; // edx
  int *v7; // ecx
  int v8; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h] BYREF

  if ( !a3 )
  {
    *sub_46B984() = 22;
    sub_467EF4((int)a1, a2);
    return -1;
  }
  sub_469596((int)a3);
  ms_exc.registration.TryLevel = 0;
  if ( (a3[3] & 0x1000) == 0 )
  {
    v5 = sub_47631B((int)a1, a2, (int)a3);
    if ( v5 == -1 || v5 == -2 )
    {
      v7 = dword_4B60F0;
      a1 = dword_4B60F0;
      v6 = v5 >> 6;
      a2 = v5 & 0x3F;
    }
    else
    {
      v6 = v5 >> 6;
      a2 = v5 & 0x3F;
      a1 = (int *)((char *)*(&dword_4B7B38 + (v5 >> 6)) + 56 * a2);
      v7 = dword_4B60F0;
    }
    if ( *((_BYTE *)a1 + 41) )
      goto LABEL_14;
    if ( v5 != -1 && v5 != -2 )
      v7 = (int *)((char *)*(&dword_4B7B38 + v6) + 56 * a2);
    if ( (*((_BYTE *)v7 + 45) & 1) != 0 )
    {
LABEL_14:
      *sub_46B984() = 22;
      sub_467EF4((int)a1, a2);
      sub_4676C0(v3, &__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
      return -1;
    }
  }
  v8 = sub_4760CB((int)a1, a2, a3);
  sub_4695AA((int)a3);
  return v8;
}
// 4761D6: variable 'v3' is possibly undefined
// 4B60F0: using guessed type int dword_4B60F0[6];
