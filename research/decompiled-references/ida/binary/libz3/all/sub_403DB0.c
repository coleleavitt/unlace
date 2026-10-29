void __fastcall sub_403DB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r9d
  __int64 v4; // r10
  unsigned int v5; // r11d
  unsigned int v6; // r8d
  _QWORD *v7; // rdx
  int v8; // eax

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 72);
      if ( v4 && (v5 = *(_DWORD *)(v4 - 4)) != 0 )
      {
        v6 = 0;
        while ( 1 )
        {
          v7 = *(_QWORD **)(a2 + 8);
          v8 = 0;
          while ( *(_QWORD *)(v4 + 8LL * (v6 + v8)) == *v7 )
          {
            ++v8;
            ++v7;
            if ( v3 == v8 )
              return;
          }
          if ( v3 == v8 )
            break;
          v6 += v3;
          if ( v6 >= v5 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        sub_3EE030(a1 + 64, a2);
      }
    }
  }
}

