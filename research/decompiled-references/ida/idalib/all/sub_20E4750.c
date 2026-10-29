unsigned __int64 *__fastcall sub_20E4750(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  int i; // r13d
  unsigned __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // r8
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbp
  unsigned __int64 *result; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]

  v2 = a1 + 8;
  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8) + 16LL * (unsigned int)(v4 - 1);
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 12));
  for ( i = *(_DWORD *)(*(_QWORD *)a1 + 264LL) - v4; i; --i )
  {
    v8 = v6 & 0xFFFFFFFFFFFFFFC0LL;
    if ( a2 <= *(_DWORD *)((char *)&qword_80 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
    {
      v11 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFC0LL);
      v10 = 0;
    }
    else
    {
      if ( a2 <= *(_DWORD *)((char *)&qword_80 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
      {
        v10 = 1;
      }
      else if ( a2 <= *(_DWORD *)((char *)off_88 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
      {
        v10 = 2;
      }
      else if ( a2 <= *(_DWORD *)((char *)off_88 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
      {
        v10 = 3;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_90 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
      {
        v10 = 4;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_90 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
      {
        v10 = 5;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_98 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
      {
        v10 = 6;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_98 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
      {
        v10 = 7;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_A0 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
      {
        v10 = 8;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_A0 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
      {
        v10 = 9;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_A8 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
      {
        v10 = 10;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_A8 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
      {
        v10 = 11;
      }
      else if ( a2 <= *(int *)((char *)&dword_B0 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
      {
        v10 = 12;
      }
      else if ( a2 <= *(int *)((char *)&dword_B4 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
      {
        v10 = 13;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_B8 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
      {
        v10 = 14;
      }
      else if ( a2 <= *(_DWORD *)((char *)&qword_B8 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
      {
        v10 = 15;
      }
      else if ( a2 <= *(_DWORD *)((char *)off_C0 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
      {
        v10 = 16;
      }
      else
      {
        v9 = 16;
        do
          v10 = ++v9;
        while ( a2 > *(_DWORD *)((char *)&qword_80 + 4 * v9 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) );
      }
      v11 = (__int64 *)(v8 + 8 * v10);
    }
    v12 = (v10 << 32) | ((v6 & 0x3F) + 1);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
    {
      v18 = (v10 << 32) | ((v6 & 0x3F) + 1);
      sub_2237220(v2, a1 + 24, v4 + 1, 16);
      v12 = v18;
      v13 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 16));
    }
    else
    {
      v13 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 16 * v4);
    }
    *v13 = v8;
    v13[1] = v12;
    v4 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
    *(_DWORD *)(a1 + 16) = v4;
    v6 = *v11;
  }
  v14 = v6 & 0xFFFFFFFFFFFFFFC0LL;
  if ( a2 <= *(_DWORD *)&byte_4[v6 & 0xFFFFFFFFFFFFFFC0LL] )
  {
    v15 = 0;
  }
  else if ( a2 <= *(_DWORD *)&byte_9[(v6 & 0xFFFFFFFFFFFFFFC0LL) + 3] )
  {
    v15 = 1;
  }
  else if ( a2 <= *(int *)((char *)&dword_14 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
  {
    v15 = 2;
  }
  else if ( a2 <= *(_DWORD *)((char *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
  {
    v15 = 3;
  }
  else if ( a2 <= *(_DWORD *)((char *)&qword_20 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
  {
    v15 = 4;
  }
  else if ( a2 <= *(_DWORD *)((char *)&qword_28 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
  {
    v15 = 5;
  }
  else if ( a2 <= *(_DWORD *)((char *)&word_34 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
  {
    v15 = 6;
  }
  else if ( a2 <= *(_DWORD *)((char *)&word_3C + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
  {
    v15 = 7;
  }
  else if ( a2 <= *(int *)((char *)&dword_44 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) )
  {
    v15 = 8;
  }
  else if ( a2 <= *(_DWORD *)((char *)&qword_48 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) )
  {
    v15 = 9;
  }
  else
  {
    v15 = (unsigned int)(*(_DWORD *)((char *)&qword_50 + (v6 & 0xFFFFFFFFFFFFFFC0LL) + 4) < a2) + 10;
  }
  v16 = (v15 << 32) | ((v6 & 0x3F) + 1);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    sub_2237220(v2, a1 + 24, v4 + 1, 16);
    v4 = *(unsigned int *)(a1 + 16);
  }
  result = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 16 * v4);
  *result = v14;
  result[1] = v16;
  ++*(_DWORD *)(a1 + 16);
  return result;
}
