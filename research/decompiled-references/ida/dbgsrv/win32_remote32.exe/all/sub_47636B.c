/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47636B
// Address: 0x0047636B

//----- (0047636B) --------------------------------------------------------
int __usercall sub_47636B@<eax>(int *a1@<ebx>, int a2@<edi>, int a3, _DWORD *a4)
{
  int v4; // ebp
  int v6; // eax
  int v7; // edx
  int *v8; // ecx
  int v9; // [esp+10h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h] BYREF

  if ( !a4 )
  {
    *sub_46B984() = 22;
    sub_467EF4((int)a1, a2);
    return -1;
  }
  sub_469596((int)a4);
  ms_exc.registration.TryLevel = 0;
  if ( (a4[3] & 0x1000) == 0 )
  {
    v6 = sub_47631B((int)a1, a2, (int)a4);
    if ( v6 == -1 || v6 == -2 )
    {
      v8 = dword_4B60F0;
      a1 = dword_4B60F0;
      v7 = v6 >> 6;
      a2 = v6 & 0x3F;
    }
    else
    {
      v7 = v6 >> 6;
      a2 = v6 & 0x3F;
      a1 = (int *)((char *)*(&dword_4B7B38 + (v6 >> 6)) + 56 * a2);
      v8 = dword_4B60F0;
    }
    if ( *((_BYTE *)a1 + 41) )
      goto LABEL_14;
    if ( v6 != -1 && v6 != -2 )
      v8 = (int *)((char *)*(&dword_4B7B38 + v7) + 56 * a2);
    if ( (*((_BYTE *)v8 + 45) & 1) != 0 )
    {
LABEL_14:
      *sub_46B984() = 22;
      sub_467EF4((int)a1, a2);
      sub_4676C0(v4, &__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
      return -1;
    }
  }
  v9 = sub_476342((int)a1, a2, a3, a4);
  sub_4695AA((int)a4);
  return v9;
}
// 47642C: variable 'v4' is possibly undefined
// 4B60F0: using guessed type int dword_4B60F0[6];
