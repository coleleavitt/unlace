__int64 __fastcall sub_43D160(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rbx
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // edx

  switch ( a3 )
  {
    case 1:
      *a1 = *a2;
      break;
    case 2:
      v6 = *a2;
      v7 = operator new(0x18u);
      *(_QWORD *)v7 = *(_QWORD *)v6;
      v8 = *(_QWORD *)(v6 + 8);
      *(_QWORD *)(v7 + 8) = v8;
      if ( v8 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
        else
          ++*(_DWORD *)(v8 + 8);
      }
      v9 = *(_DWORD *)(v6 + 16);
      *a1 = v7;
      *(_DWORD *)(v7 + 16) = v9;
      break;
    case 3:
      v4 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v5 = (volatile signed __int32 *)v4[1];
        if ( v5 )
          sub_4343A0(v5);
        operator delete(v4, 0x18u);
      }
      break;
    case 0:
      *a1 = 0;
      break;
  }
  return 0;
}
