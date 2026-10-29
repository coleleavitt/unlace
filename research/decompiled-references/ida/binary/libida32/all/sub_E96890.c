__int64 __fastcall sub_E96890(__int64 *a1, __int64 a2)
{
  __int64 v4; // r13
  _DWORD *v5; // rbx
  _DWORD *v6; // r15
  const char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // rax
  __int64 v12; // rdi
  int v13; // ecx
  const char *v14; // rax
  __int64 v15; // rdi
  _BYTE *v16; // rax
  __int64 v18; // r13
  const __m128i *v19; // r14
  _BYTE *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  _BYTE *v24; // rdx
  __int64 v25; // [rsp+8h] [rbp-40h]

  sub_971800(*a1, "map(");
  if ( *(_DWORD *)(a2 + 136) != 6 )
  {
    v4 = *a1;
    v5 = (_DWORD *)(a2 + 80);
    v6 = (_DWORD *)(a2 + 108);
    while ( 1 )
    {
      if ( *v5 == 6 )
        goto LABEL_7;
      if ( *v5 == 10 )
      {
        v12 = *(_QWORD *)(a2 + 8LL * (unsigned int)(2 * *(_DWORD *)(a2 + 16)) + 152);
        if ( v12 )
        {
          v25 = sub_E90F10();
          sub_EE3EC0(v12, v4, 0, v13, 0, 0, (__int64)"\n", v25);
          v4 = *a1;
          v11 = *(_BYTE **)(*a1 + 32);
          if ( (unsigned __int64)v11 >= *(_QWORD *)(*a1 + 24) )
            goto LABEL_12;
          goto LABEL_6;
        }
      }
      else
      {
        v7 = (const char *)sub_FDA030(55);
        sub_971800(v4, v7);
        if ( *v5 == 9 )
        {
          v18 = *a1;
          v19 = (const __m128i *)a1[1];
          v20 = *(_BYTE **)(*a1 + 32);
          if ( (unsigned __int64)v20 >= *(_QWORD *)(*a1 + 24) )
          {
            v7 = (const char *)&qword_28;
            sub_2257CD0(*a1, 40);
          }
          else
          {
            v21 = (__int64)(v20 + 1);
            *(_QWORD *)(v18 + 32) = v20 + 1;
            *v20 = 40;
          }
          v22 = *(_QWORD *)(a2 + 40);
          if ( v22 )
          {
            v7 = (const char *)v18;
            sub_E6C510(v22, v18, v19, 0, 1);
          }
          v23 = sub_B62D60(v18, (__int64)v7, v8, v21, v9, v10, *(_QWORD *)(a2 + 56));
          v24 = *(_BYTE **)(v23 + 32);
          if ( (unsigned __int64)v24 >= *(_QWORD *)(v23 + 24) )
          {
            sub_2257CD0(v23, 41);
            v4 = *a1;
            goto LABEL_5;
          }
          *(_QWORD *)(v23 + 32) = v24 + 1;
          *v24 = 41;
        }
        v4 = *a1;
      }
LABEL_5:
      v11 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v11 >= *(_QWORD *)(v4 + 24) )
      {
LABEL_12:
        ++v5;
        sub_2257CD0(v4, 44);
        v4 = *a1;
        if ( v6 == v5 )
        {
LABEL_13:
          v14 = (const char *)sub_FDA030(55);
          sub_971800(v4, v14);
          v15 = *a1;
          v16 = *(_BYTE **)(*a1 + 32);
          if ( (unsigned __int64)v16 >= *(_QWORD *)(*a1 + 24) )
          {
            sub_2257CD0(v15, 58);
          }
          else
          {
            *(_QWORD *)(v15 + 32) = v16 + 1;
            *v16 = 58;
          }
          break;
        }
      }
      else
      {
LABEL_6:
        *(_QWORD *)(v4 + 32) = v11 + 1;
        *v11 = 44;
        v4 = *a1;
LABEL_7:
        if ( v6 == ++v5 )
          goto LABEL_13;
      }
    }
  }
  sub_E96760((const __m128i **)a1, a2, 32);
  return sub_971800(*a1, ")");
}

