void __fastcall sub_22593D0(__int64 a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // rbx
  volatile signed __int32 *v3; // rbp
  int v4; // eax
  _DWORD *v5; // rbp
  int v6; // eax

  v1 = *(_QWORD **)(a1 + 24);
  v2 = *(_QWORD **)(a1 + 16);
  if ( v1 != v2 )
  {
    if ( &_pthread_key_create )
    {
      v3 = (volatile signed __int32 *)v2[1];
      if ( v3 )
        goto LABEL_6;
LABEL_4:
      while ( 1 )
      {
        v2 += 2;
        if ( v1 == v2 )
          break;
        while ( 1 )
        {
          v3 = (volatile signed __int32 *)v2[1];
          if ( !v3 )
            break;
LABEL_6:
          if ( _InterlockedSub(v3 + 2, 1u) )
            goto LABEL_4;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
          if ( _InterlockedSub(v3 + 3, 1u) )
            goto LABEL_4;
          v2 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
          if ( v1 == v2 )
            goto LABEL_9;
        }
      }
    }
    else
    {
      do
      {
        v5 = (_DWORD *)v2[1];
        if ( v5 )
        {
          v6 = v5[2];
          v5[2] = v6 - 1;
          if ( v6 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
            v4 = v5[3];
            v5[3] = v4 - 1;
            if ( v4 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 24LL))(v5);
          }
        }
        v2 += 2;
      }
      while ( v1 != v2 );
    }
LABEL_9:
    v2 = *(_QWORD **)(a1 + 16);
  }
  if ( v2 )
    operator delete(v2);
}
