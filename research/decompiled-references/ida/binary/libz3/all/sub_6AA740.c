void __fastcall sub_6AA740(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 (__fastcall *v2)(); // rax
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx

  v1 = *(_QWORD **)(a1 + 64);
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)())(*v1 + 32LL);
    if ( v2 == sub_6AFF70 )
    {
      v3 = v1[6];
      if ( v3 )
      {
        v4 = 0;
        do
        {
          if ( v4 >= *(_DWORD *)(v3 - 4) )
            break;
          v5 = v4++;
          sub_8E3A50(*(_QWORD *)(v3 + 8 * v5) + 80LL);
          v3 = v1[6];
        }
        while ( v3 );
      }
    }
    else
    {
      ((void (__fastcall *)(_QWORD))v2)(*(_QWORD *)(a1 + 64));
    }
  }
}

