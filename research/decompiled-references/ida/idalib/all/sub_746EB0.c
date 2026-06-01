unsigned __int64 __fastcall sub_746EB0(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v6; // di
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 v11; // rsi
  int v12; // ecx
  unsigned int *v13; // r13
  __int64 v14; // rdx
  int v15; // eax
  int v16; // edx
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+10h] [rbp-58h]
  unsigned __int64 v27; // [rsp+10h] [rbp-58h]
  int v28; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v6 = dword_2CCC6E0 - 1;
  v29 = __readfsqword(0x28u);
  --dword_2CCC6E0;
  if ( qword_2CCC6E8 && (v6 & 0xF) == 0 )
    qword_2CCC6E8();
  v8 = *(_QWORD *)(a1 + 16);
  byte_2CCCD18 = 1;
  v25 = *(_QWORD *)(v8 + 8);
  v9 = sub_73AFA0(a1, a3, 0);
  byte_2CCCD18 = 0;
  v10 = (__int64 *)v9;
  if ( v9 )
  {
    if ( *(__int16 *)(v9 + 8) >= 0 )
    {
      v11 = *(_QWORD *)(a4 + 8);
      if ( a3 >= *(_DWORD *)a4
        || (v12 = *(unsigned __int8 *)(v11 + ((unsigned __int64)a3 >> 3)), !_bittest(&v12, a3 & 7)) )
      {
        if ( *(_DWORD *)a4 < a3 + 1 )
        {
          v21 = *(_QWORD *)(a4 + 16);
          v22 = (a3 + 8) >> 3;
          if ( v21 < v22 )
          {
            if ( *(_QWORD *)(a4 + 24) < v22 )
            {
              v23 = qvector_reserve(a4 + 8, v11, (a3 + 8) >> 3, 1);
              v21 = *(_QWORD *)(a4 + 16);
              v22 = (a3 + 8) >> 3;
              *(_QWORD *)(a4 + 8) = v23;
              v11 = v23;
            }
            v27 = v22;
            memset((void *)(v11 + v21), 0, v22 - v21);
            v11 = *(_QWORD *)(a4 + 8);
            *(_QWORD *)(a4 + 16) = v27;
          }
          else if ( v22 != v21 )
          {
            *(_QWORD *)(a4 + 16) = v22;
          }
          *(_DWORD *)a4 = a3 + 1;
        }
        *(_BYTE *)(v11 + ((unsigned __int64)a3 >> 3)) |= 1 << (a3 & 7);
        v13 = (unsigned int *)*v10;
        sub_7385E0(*(_QWORD *)(a1 + 8), *v10);
        v14 = *v13;
        if ( (_DWORD)v14 )
          sub_746EB0(a1, a2, v14, a4);
        v15 = *((__int16 *)v13 + 2);
        v16 = dword_2CCC6F4;
        v28 = 0;
        if ( v15 <= dword_2CCC6F4 )
          v16 = v15;
        v17 = v16;
        sub_745540((unsigned int *)a1, (_DWORD **)v10, &v28);
        if ( v17 > 0 )
        {
          v18 = v17;
          v19 = 0;
          v26 = v18;
          do
          {
            v13 = (unsigned int *)*v10;
            sub_746C80(a1, a2, (_DWORD **)v10, v19);
            if ( *v13 )
            {
              sub_746EB0(a1, a2, *(unsigned int *)((char *)v13 + 6 * v19 + 6), a4);
              sub_745540((unsigned int *)a1, (_DWORD **)v10, &v28);
            }
            ++v19;
          }
          while ( v26 != v19 );
        }
        sub_7385F0(*(_QWORD *)(a1 + 8), (__int64)v13);
      }
    }
  }
  *(_QWORD *)(v8 + 8) = v25;
  return v29 - __readfsqword(0x28u);
}
