__int64 __fastcall sub_17F6650(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // r13d
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 *v12; // rbx
  _BYTE *v13; // r14
  __int64 (__fastcall *v14)(__int64); // rax
  char v15; // al
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // rax
  int v25; // [rsp+Ch] [rbp-7Ch]
  __int64 v27; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h]
  _BYTE v30[72]; // [rsp+40h] [rbp-48h] BYREF

  v6 = *((unsigned int *)a2 + 10);
  if ( ((unsigned int)v6 > 0x2710
     || (v7 = *((_DWORD *)a2 + 11), v7 > 0x2710)
     || (a4 = *((unsigned int *)a2 + 12), (unsigned int)a4 > 0x2710)
     || (v6 = (unsigned int)(100 * v6), a4 = (unsigned int)(150 * a4), (unsigned int)a4 + (_DWORD)v6 + 110 * v7 > 0x31))
    && (v10 = (__int64 *)a2[2], ptr = v30, v29 = 0x100000000LL, v11 = *((unsigned int *)a2 + 6), (_DWORD)v11)
    && *v10 )
  {
    v12 = &v10[v11];
    do
    {
      v13 = (_BYTE *)*v10;
      if ( (*(_BYTE *)(*v10 + 28) & 0x7Fu) - 34 <= 5 )
      {
        v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL);
        if ( v14 == sub_9A8F10 )
        {
          a2 = &v27;
          v15 = sub_B7F5F0((_QWORD *)*v10, &v27, v6, a4, a5, a6);
        }
        else
        {
          v15 = v14(*v10);
        }
        if ( !v15 )
        {
          LODWORD(v29) = 0;
          v16 = *(_QWORD *)(a1 + 40);
          v25 = sub_B76070((__int64)v13, (__int64)a2, v6, a4);
          if ( v25 == (unsigned int)sub_B76070(v16, (__int64)a2, v17, v18) )
          {
            a2 = (__int64 *)v16;
            LOBYTE(v19) = sub_179BAF0((__int64)v13, v16, &ptr, a4);
            v8 = v19;
            if ( (_BYTE)v19 )
            {
              if ( (v13[28] & 0x7Fu) - 35 > 3 )
              {
                if ( !*(_QWORD *)(a1 + 48) )
                  goto LABEL_25;
              }
              else
              {
                v20 = *(_QWORD *)(sub_B8C1B0((__int64)(v13 + 72)) + 16);
                if ( (v20 & 4) != 0 )
                  v21 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
                else
                  v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v21 )
                {
                  v22 = v21 - 64;
                  if ( v21 != 64 )
                  {
                    v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v21 - 64) + 32LL);
                    v24 = v23 == sub_A01140 ? sub_B70A60(v22) : v23(v22);
                    v6 = a1;
                    if ( v24 == *(_QWORD *)(a1 + 48) )
                      goto LABEL_25;
                  }
                }
              }
            }
          }
        }
      }
      ++v10;
    }
    while ( v10 != v12 );
    v8 = 0;
LABEL_25:
    if ( ptr != v30 )
      free(ptr);
  }
  else
  {
    return 0;
  }
  return v8;
}
