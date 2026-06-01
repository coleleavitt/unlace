void __fastcall sub_F2590(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 *v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  _QWORD *v9; // rbx

  switch ( *(_DWORD *)a1 )
  {
    case 1:
    case 2:
      v1 = *(_QWORD **)(a1 + 8);
      if ( v1 )
      {
        v2 = v1[1];
        if ( v2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
        operator delete(v1, 0x10u);
      }
      break;
    case 3:
      v3 = *(__int64 **)(a1 + 8);
      if ( v3 )
      {
        v4 = (_QWORD *)*v3;
        v5 = *v3 + 8 * v3[1];
        if ( *v3 != v5 )
        {
          do
          {
            if ( *v4 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
            ++v4;
          }
          while ( (_QWORD *)v5 != v4 );
          v5 = *v3;
        }
        if ( v5 )
        {
          v3[1] = 0;
          qfree();
        }
        operator delete(v3, 0x18u);
      }
      break;
    case 4:
      v6 = *(void **)(a1 + 8);
      if ( v6 )
        operator delete(v6, 0x20u);
      break;
    case 6:
      v9 = *(_QWORD **)(a1 + 8);
      if ( v9 )
      {
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
        }
        qfree();
      }
      break;
    case 8:
      v7 = *(void **)(a1 + 8);
      if ( v7 )
        operator delete(v7, 1u);
      break;
    case 9:
      v8 = *(void **)(a1 + 8);
      if ( v8 )
        operator delete(v8, 0x10u);
      break;
    default:
      return;
  }
}

