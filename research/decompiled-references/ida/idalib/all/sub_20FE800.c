__int64 __fastcall sub_20FE800(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  unsigned int v6; // r12d
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int128 v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h]
  int v18; // [rsp+18h] [rbp-30h]

  v2 = a1 + 96;
  if ( !*(_BYTE *)(a1 + 116) )
  {
    if ( !sub_2236570(a1 + 96, a2) )
      goto LABEL_9;
    return 1;
  }
  v4 = *(_QWORD **)(a1 + 96);
  v5 = &v4[*(unsigned int *)(a1 + 108)];
  if ( v4 != v5 )
  {
    while ( a2 != *v4 )
    {
      if ( v5 == ++v4 )
        goto LABEL_9;
    }
    return 1;
  }
LABEL_9:
  v6 = 0;
  if ( (*(_BYTE *)(a2 + 9) & 0x70) != 0x20 )
    return v6;
  v8 = *(_QWORD *)(a2 + 24);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( (unsigned __int8)sub_210E1F0(v8, &v16, 0) )
  {
    if ( !*((_QWORD *)&v16 + 1) && !v18 )
    {
      if ( (_QWORD)v16 )
      {
        v6 = sub_20FE800(a1);
        if ( (_BYTE)v6 )
        {
          if ( !*(_BYTE *)(a1 + 116) )
            goto LABEL_31;
          v9 = *(_QWORD **)(a1 + 96);
          v10 = *(unsigned int *)(a1 + 108);
          v11 = &v9[v10];
          if ( v9 != v11 )
          {
            v12 = *(_QWORD **)(a1 + 96);
            if ( a2 == *v9 )
              goto LABEL_23;
            do
            {
              if ( v11 == ++v12 )
                break;
            }
            while ( a2 != *v12 );
          }
          if ( (unsigned int)v10 < *(_DWORD *)(a1 + 104) )
          {
            *(_DWORD *)(a1 + 108) = v10 + 1;
            *v11 = a2;
            v9 = *(_QWORD **)(a1 + 96);
            v12 = &v9[v10];
          }
          else
          {
LABEL_31:
            v12 = (_QWORD *)sub_2236760(v2, a2);
            v9 = *(_QWORD **)(a1 + 96);
            if ( !*(_BYTE *)(a1 + 116) )
            {
              v13 = &v9[*(unsigned int *)(a1 + 104)];
              goto LABEL_24;
            }
          }
LABEL_23:
          v13 = &v9[*(unsigned int *)(a1 + 108)];
LABEL_24:
          if ( v12 != v13 && *v12 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v14 = v12 + 1;
            do
            {
              v15 = v14;
              if ( v13 == v14 )
                break;
              ++v14;
            }
            while ( *v15 >= 0xFFFFFFFFFFFFFFFELL );
          }
          return v6;
        }
      }
    }
  }
  return 0;
}
