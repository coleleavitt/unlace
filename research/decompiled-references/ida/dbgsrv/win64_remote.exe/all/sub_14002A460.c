/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002A460
// Address: 0x000000014002A460

//----- (000000014002A460) ----------------------------------------------------
__int64 __fastcall sub_14002A460(char *a1, char *a2)
{
  char *v3; // rbx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = a1;
  if ( a1 != a2 )
  {
    if ( *a1 == 10 )
    {
      v3 = sub_1400291D0(a1, 1);
      if ( !v3 )
        return sub_140063DE0();
    }
    sub_140029390((__int64)v3);
    v5 = *a2;
    *v3 = v5;
    switch ( v5 )
    {
      case 2:
      case 5:
      case 8:
      case 9:
        *((_QWORD *)v3 + 1) = *((_QWORD *)a2 + 1);
        break;
      case 3:
      case 10:
        *(_OWORD *)(v3 + 8) = *(_OWORD *)(a2 + 8);
        break;
      case 6:
        *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
        break;
      case 7:
        v6 = *((_QWORD *)v3 + 1);
        v7 = *((_QWORD *)v3 + 2);
        v8 = *((_QWORD *)v3 + 3);
        *((_QWORD *)v3 + 1) = *((_QWORD *)a2 + 1);
        *((_QWORD *)v3 + 2) = *((_QWORD *)a2 + 2);
        *((_QWORD *)v3 + 3) = *((_QWORD *)a2 + 3);
        *((_QWORD *)a2 + 1) = v6;
        *((_QWORD *)a2 + 2) = v7;
        *((_QWORD *)a2 + 3) = v8;
        break;
      default:
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(282);
    }
    *a2 = 2;
    *((_QWORD *)a2 + 1) = 0;
  }
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
