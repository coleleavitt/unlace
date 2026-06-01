__int64 __fastcall sub_C3CA0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  int v3; // ebp
  __int64 v5; // rdx
  unsigned __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v18; // [rsp+8h] [rbp-40h]

  v2 = HIDWORD(a2);
  v3 = a2;
  qmutex_lock();
  if ( !BYTE4(a2) )
  {
    --*(_DWORD *)(a1 + 272);
    qsnprintf();
  }
  v5 = *(_QWORD *)(a1 + 248);
  v6 = *(_QWORD *)(a1 + 256);
  if ( v6 < v5 + 1 )
  {
    v10 = qvector_reserve();
    v11 = *(_QWORD *)(a1 + 248);
    v7 = v10;
    v12 = *(__int64 **)(a1 + 240);
    v13 = *(_QWORD *)(a1 + 256);
    *(_QWORD *)(a1 + 256) = v6;
    v14 = v11 - 1;
    if ( v14 >= 0 )
    {
      v15 = v7;
      do
      {
        v16 = *v12;
        v15 += 8;
        ++v12;
        *(_QWORD *)(v15 - 8) = v16;
      }
      while ( v14-- != 0 );
    }
    v18 = v13;
    qfree();
    *(_QWORD *)(a1 + 240) = v7;
    v5 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 256) = v18;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 240);
  }
  v8 = v7 + 8 * v5;
  *(_DWORD *)v8 = v3;
  *(_BYTE *)(v8 + 4) = v2;
  ++*(_QWORD *)(a1 + 248);
  qsem_post();
  return qmutex_unlock();
}

