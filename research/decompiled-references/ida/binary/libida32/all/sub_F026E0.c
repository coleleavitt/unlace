__int64 __fastcall sub_F026E0(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rbx
  void *v7; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = operator new(0x78u);
      *(_QWORD *)v5 = *(_QWORD *)v4;
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v4 + 8);
      *(_DWORD *)(v5 + 16) = *(_DWORD *)(v4 + 16);
      *(_DWORD *)(v5 + 20) = *(_DWORD *)(v4 + 20);
      sub_A2FF00(v5 + 24, (int *)(v4 + 24));
      *(_QWORD *)(v5 + 80) = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v5 + 88) = v5 + 104;
      sub_F00A90((_QWORD *)(v5 + 88), *(_BYTE **)(v4 + 88), *(_QWORD *)(v4 + 88) + *(_QWORD *)(v4 + 96));
      *a1 = v5;
      return 0;
    case 3:
      v6 = *a1;
      if ( !*a1 )
        return 0;
      v7 = *(void **)(v6 + 88);
      if ( v7 != (void *)(v6 + 104) )
        operator delete(v7);
      if ( *(_DWORD *)(v6 + 24) > 1u )
        sub_A2BBA0((int *)(v6 + 24));
      operator delete((void *)v6, 0x78u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}

