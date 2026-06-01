__int64 __fastcall sub_B14500(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v3; // r9d
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // r10
  int v12; // r11d
  _QWORD *v13; // rax
  __int64 v14; // r11
  _QWORD *v15; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_DWORD *)(v1 + 120);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = 0;
    v6 = 0;
    v7 = *(_QWORD *)(v4 + 64);
    do
    {
      v8 = *(_DWORD *)(*(_QWORD *)(v1 + 40LL * (*(_DWORD *)(v1 + 8) & 1) + 16) + v6);
      v9 = v8 >> 1;
      if ( v7 )
      {
        if ( (unsigned int)v9 < *(_DWORD *)(v7 - 4) )
        {
          v10 = *(_QWORD **)(v7 + 48 * v9 + 8LL * (v8 & 1));
          if ( v10 )
          {
            v11 = (_QWORD *)*v10;
            if ( *v10 )
            {
              v12 = *((_DWORD *)v11 - 1);
              if ( v12 )
              {
                v13 = (_QWORD *)*v10;
                while ( v1 != *v13 )
                {
                  if ( &v11[v12] == ++v13 )
                    goto LABEL_12;
                }
                v14 = (unsigned int)(v12 - 1);
                v15 = &v11[v14];
                *v13 = *v15;
                *v15 = v1;
                *((_DWORD *)v11 - 1) = v14;
                v3 = *(_DWORD *)(v1 + 120);
              }
            }
          }
        }
      }
LABEL_12:
      ++v5;
      v6 += 40;
    }
    while ( v5 < v3 );
  }
  *(_DWORD *)(v1 + 120) = 0;
  sub_182F200(*(_QWORD *)(v1 + 128), v1 + 136);
  return sub_182F200(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL), *(_QWORD *)(a1 + 16) + 104LL);
}

