void __fastcall sub_2775D0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 *v11; // r12
  _QWORD *v12; // rbx
  __int64 v13; // rbp
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // [rsp-18h] [rbp-18h]

  v19 = v6;
  switch ( *(_DWORD *)a1 )
  {
    case 1:
    case 2:
      v9 = *(_QWORD **)(a1 + 8);
      if ( v9 )
      {
        v10 = v9[1];
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        operator delete(v9, 0x10u);
      }
      break;
    case 3:
      v11 = *(__int64 **)(a1 + 8);
      if ( v11 )
      {
        v12 = (_QWORD *)*v11;
        v13 = *v11 + 8 * v11[1];
        if ( *v11 != v13 )
        {
          do
          {
            if ( *v12 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
            ++v12;
          }
          while ( (_QWORD *)v13 != v12 );
          v13 = *v11;
        }
        if ( v13 )
        {
          v11[1] = 0;
          qfree(v13, a2);
        }
        operator delete(v11, 0x18u);
      }
      break;
    case 4:
      v14 = *(void **)(a1 + 8);
      if ( v14 )
        operator delete(v14, 0x20u);
      break;
    case 6:
      v17 = *(__int64 **)(a1 + 8);
      if ( v17 )
      {
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18, a2);
        }
        qfree(v17, a2, a3, a4, a5, a6, v19, v7, v8);
      }
      break;
    case 8:
      v15 = *(void **)(a1 + 8);
      if ( v15 )
        operator delete(v15, 1u);
      break;
    case 9:
      v16 = *(void **)(a1 + 8);
      if ( v16 )
        operator delete(v16, 0x10u);
      break;
    default:
      return;
  }
}
