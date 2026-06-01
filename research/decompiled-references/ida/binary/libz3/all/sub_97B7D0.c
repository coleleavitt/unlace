__int64 __fastcall sub_97B7D0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdx
  __int64 v3; // rsi

  v1 = 0;
  if ( *(_BYTE *)(a1 + 888) )
  {
LABEL_2:
    v2 = *(_QWORD *)(a1 + 672);
    if ( v2 )
    {
      while ( v1 < *(_DWORD *)(v2 - 4) )
      {
        v3 = *(unsigned int *)(*(_QWORD *)(a1 + 880) + 4LL * v1);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + (unsigned int)(2 * v3)) == 1 )
        {
          ++v1;
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v3, 1);
          if ( *(_BYTE *)(a1 + 888) )
            goto LABEL_2;
          break;
        }
        ++v1;
      }
    }
  }
  *(_WORD *)(a1 + 888) = 0;
  return 0;
}

