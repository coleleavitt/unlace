/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023E00
// Address: 0x0000000100023E00

//----- (0000000100023E00) ----------------------------------------------------
void __fastcall sub_100023E00(int *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned __int8 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx

  v3 = *a1;
  if ( *a1 == 3 )
  {
    (*((void (__fastcall **)(__int64, __int64, _QWORD))a1 + 2))(a3, a2, *((_QWORD *)a1 + 4));
  }
  else
  {
    v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 2) + a3);
    switch ( v3 )
    {
      case 2:
        sub_100023D10(a2, v4, *((_QWORD *)a1 + 3), 0);
        break;
      case 1:
        sub_100023D10(a2, v4, *((_QWORD *)a1 + 3), -1);
        break;
      case 0:
        v5 = 0;
        switch ( *((_QWORD *)a1 + 3) )
        {
          case 1LL:
            v5 = *v4;
            break;
          case 2LL:
            v5 = *(unsigned __int16 *)v4;
            break;
          case 4LL:
            v5 = *(unsigned int *)v4;
            break;
          case 8LL:
            v5 = *(_QWORD *)v4;
            break;
          default:
            break;
        }
        v6 = *((_QWORD *)a1 + 4);
        switch ( v6 )
        {
          case 4LL:
            v5 = (unsigned int)v5;
            break;
          case 2LL:
            v5 = (unsigned __int16)v5;
            break;
          case 1LL:
            v5 = (unsigned __int8)v5;
            break;
        }
        *(_QWORD *)(a2 + 8) = v5;
        break;
    }
  }
}
