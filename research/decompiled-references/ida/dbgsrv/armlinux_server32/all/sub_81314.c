/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81314
// Address: 0x00081314

//----- (00081314) --------------------------------------------------------
int sub_81314()
{
  int *v0; // r2
  int result; // r0
  int v2; // r3
  int v3; // r3

  v0 = (int *)sub_84098();
  result = *v0;
  if ( *v0 )
  {
    if ( *(_BYTE *)(result + 32) == 71
      && *(_BYTE *)(result + 33) == 78
      && *(_BYTE *)(result + 34) == 85
      && *(_BYTE *)(result + 35) == 67
      && *(_BYTE *)(result + 36) == 67
      && *(_BYTE *)(result + 37) == 43
      && *(_BYTE *)(result + 38) == 43
      && *(unsigned __int8 *)(result + 39) <= 1u )
    {
      v2 = *(_DWORD *)(result + 20);
      if ( v2 < 0 )
      {
        v3 = v2 + 1;
        if ( !v3 )
          *v0 = *(_DWORD *)(result + 16);
        goto LABEL_15;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 < 0 )
          sub_80A40();
LABEL_15:
        *(_DWORD *)(result + 20) = v3;
        return result;
      }
      *v0 = *(_DWORD *)(result + 16);
    }
    else
    {
      *v0 = 0;
    }
    return j__Unwind_DeleteException();
  }
  return result;
}
