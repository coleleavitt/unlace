__int64 __fastcall sub_746060(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r13
  __int64 v7; // r9
  int v8; // r15d
  __int64 v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int16 *v12; // rax
  int v13; // r11d
  unsigned int v14; // edi
  int v15; // ebx
  int v16; // eax
  unsigned __int16 v17; // bx
  __int64 v18; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r15
  unsigned __int16 *v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r13
  unsigned __int16 *v28; // rcx
  __int64 v29; // rsi
  __int16 v30; // [rsp+0h] [rbp-58h]
  _WORD *v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  unsigned int v33; // [rsp+10h] [rbp-48h]
  void *dest; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD *)a2;
  v7 = *(_QWORD *)a2 + 6LL;
  v8 = *(__int16 *)(*(_QWORD *)a2 + 4LL);
  v9 = v7 + 6LL * a3;
  v33 = *(_DWORD *)v9;
  v10 = *(unsigned __int16 *)(v9 + 4);
  if ( (unsigned __int16)v10 > 1u )
  {
    dest = (void *)(v7 + 6LL * a3);
    v11 = (unsigned __int16)v10;
    if ( (unsigned int)(unsigned __int16)v10 < *(_DWORD *)(v6 - 8) )
    {
      v12 = (unsigned __int16 *)(v6 + v10);
      v13 = *v12;
      v14 = *(unsigned __int16 *)((char *)v12 + (unsigned __int16)v13 + 2);
      if ( (unsigned __int16)v13 <= 0x204u && v14 <= 0x404 )
      {
        v15 = v13 + v14 + 4;
        if ( *(_DWORD *)a1 >= (unsigned int)(v11 + v15) )
        {
          v32 = v7;
          v30 = *(_WORD *)(v7 + 6LL * (__int16)v8 + 4);
          sub_741790(v6, v11, -4 - (v13 + v14));
          memmove(dest, (const void *)(v32 + 6LL * (a3 + 1)), 6LL * (v8 - a3));
          *(_WORD *)(v6 + 4) = v8 - 1;
          *(_WORD *)(a2 + 8) += v15 + 6;
          v16 = *(_DWORD *)(a2 + 32) + 1;
          if ( *(_DWORD *)(a2 + 32) == -1 )
            v16 = -1;
          v17 = v30 + v15;
          *(_DWORD *)(a2 + 32) = v16;
          v18 = v32 + 6LL * *(__int16 *)(v6 + 4);
          if ( *(_DWORD *)a1 >= (unsigned int)v17 )
          {
            *(_WORD *)(v18 + 4) = v17;
            *(_DWORD *)v18 = 0;
            if ( *(_QWORD *)(a2 + 16) || *(_QWORD *)(a2 + 24) )
            {
              v23 = *(__int16 *)(v6 + 4);
              if ( (_WORD)v23 )
              {
                v24 = (unsigned __int16 *)(v6 + 10);
                v25 = 0;
                while ( 1 )
                {
                  v26 = *v24;
                  if ( (unsigned __int16)v26 <= 1u )
                  {
                    v27 = a2 + 8 * v26;
                    v28 = *(unsigned __int16 **)(v27 + 16);
                    if ( !v28 )
                      goto LABEL_25;
                    if ( *(__int16 *)(a2 + 8) - (*v28 + 2) - (*(unsigned __int16 *)((char *)v28 + *v28 + 2) + 2) >= 0 )
                    {
                      sub_745D70(a1, a2, v25, v28, 0);
                      v29 = *(_QWORD *)(v27 + 16);
                      v22 = *(_QWORD *)(a1 + 16);
                      if ( !v29 )
                        goto LABEL_26;
                      sub_73F260(v22, v29);
                      *(_QWORD *)(v27 + 16) = 0;
                      if ( !*(_QWORD *)(a2 + 16) && !*(_QWORD *)(a2 + 24) )
                        break;
                    }
                  }
                  ++v25;
                  v24 += 3;
                  if ( v25 == v23 )
                    return v33;
                }
              }
            }
            return v33;
          }
        }
      }
    }
LABEL_25:
    sub_743130();
  }
  v20 = a2 + 8 * v10;
  if ( !*(_QWORD *)(v20 + 16) )
    goto LABEL_25;
  v31 = *(_WORD **)(v20 + 16);
  memmove((void *)(v7 + 6LL * a3), (const void *)(v7 + 6LL * (a3 + 1)), 6LL * (v8 - a3));
  *(_WORD *)(a2 + 8) += *v31 + *(_WORD *)((char *)v31 + (unsigned __int16)*v31 + 2) + 10;
  *(_WORD *)(v6 + 4) = v8 - 1;
  v21 = *(_QWORD *)(v20 + 16);
  v22 = *(_QWORD *)(a1 + 16);
  if ( !v21 )
LABEL_26:
    sub_745900(v22);
  sub_73F260(v22, v21);
  *(_QWORD *)(v20 + 16) = 0;
  return v33;
}
