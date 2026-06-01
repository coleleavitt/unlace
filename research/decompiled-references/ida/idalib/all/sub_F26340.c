__int64 __fastcall sub_F26340(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rbx
  void *v7; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = (_QWORD *)operator new(0x70u);
      *v5 = *(_QWORD *)v4;
      sub_A53C40((__int64)(v5 + 1), (int *)(v4 + 8));
      v5[8] = *(_QWORD *)(v4 + 64);
      v5[9] = *(_QWORD *)(v4 + 72);
      v5[10] = v5 + 12;
      sub_F247D0(v5 + 10, *(_BYTE **)(v4 + 80), *(_QWORD *)(v4 + 80) + *(_QWORD *)(v4 + 88));
      *a1 = (__int64)v5;
      return 0;
    case 3:
      v6 = *a1;
      if ( !*a1 )
        return 0;
      v7 = *(void **)(v6 + 80);
      if ( v7 != (void *)(v6 + 96) )
        operator delete(v7);
      if ( *(_DWORD *)(v6 + 8) > 1u )
        sub_A4F8E0((int *)(v6 + 8));
      operator delete((void *)v6, 0x70u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}
