void __fastcall sub_8EB280(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // eax

  if ( a2 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 10376) + v4) )
        {
          v5 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
          if ( v5 > *(_DWORD *)(a1 + 184) )
            v5 = *(_DWORD *)(a1 + 184);
          if ( v5
            && !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
                  *(_QWORD *)(a1 + 7488),
                  *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (*(_DWORD *)(a3 + 4 * v4) >> 1))) )
          {
            break;
          }
        }
        if ( ++v4 == a2 )
          return;
      }
      v6 = *(_DWORD *)(a3 + 4 * v4++);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 48LL))(
        *(_QWORD *)(a1 + 7488),
        *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v6 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
    }
    while ( v4 != a2 );
  }
}

