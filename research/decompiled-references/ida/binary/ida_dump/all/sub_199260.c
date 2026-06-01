void __fastcall sub_199260(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  _DWORD *v3; // rax
  _DWORD *v4; // rdx
  _DWORD *v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // r13
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD); // r14
  unsigned int v9; // eax
  int v10; // r13d
  __int64 v11; // rdx
  _DWORD *v12; // r12
  __int64 v13; // rdx
  _DWORD *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax

  *(_BYTE *)(a1 + 288) &= ~2u;
  sub_D1010(a1 + 8, a2);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 280) + 320LL) )
  {
    v2 = sub_36F3F0();
    if ( v2 != -1 )
    {
      v3 = *(_DWORD **)(a1 + 96);
      v4 = &v3[*(_QWORD *)(a1 + 104)];
      if ( v3 == v4 )
        goto LABEL_9;
      while ( v2 != *v3 )
      {
        if ( v4 == ++v3 )
          goto LABEL_9;
      }
      if ( v4 == v3 )
      {
LABEL_9:
        v5 = *(_DWORD **)(a1 + 120);
        v6 = &v5[*(_QWORD *)(a1 + 128)];
        if ( v5 == v6 )
          goto LABEL_14;
        while ( v2 != *v5 )
        {
          if ( v6 == ++v5 )
            goto LABEL_14;
        }
        if ( v6 == v5 )
        {
LABEL_14:
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 1504LL);
          v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 176LL);
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, v2);
          v10 = v8(v7, v2, v9);
          if ( v10 == -1 )
          {
            if ( !under_debugger )
              sub_383060(52128);
            BUG();
          }
          sub_D1010(a1 + 144, a2);
          v11 = *(_QWORD *)(a1 + 160);
          v12 = *(_DWORD **)(a1 + 152);
          if ( *(_QWORD *)(a1 + 168) < (unsigned __int64)(v11 + 1) )
          {
            v15 = qvector_reserve();
            v11 = *(_QWORD *)(a1 + 160);
            *(_QWORD *)(a1 + 152) = v15;
            v12 = (_DWORD *)v15;
          }
          memmove(v12 + 1, v12, 4 * v11);
          *v12 = v10;
          v13 = *(_QWORD *)(a1 + 240);
          ++*(_QWORD *)(a1 + 160);
          v14 = *(_DWORD **)(a1 + 232);
          if ( *(_QWORD *)(a1 + 248) < (unsigned __int64)(v13 + 1) )
          {
            v16 = qvector_reserve();
            v13 = *(_QWORD *)(a1 + 240);
            *(_QWORD *)(a1 + 232) = v16;
            v14 = (_DWORD *)v16;
          }
          memmove(v14 + 1, v14, 4 * v13);
          *v14 = v2;
          ++*(_QWORD *)(a1 + 240);
          *(_BYTE *)(a1 + 288) |= 2u;
        }
      }
    }
  }
}
