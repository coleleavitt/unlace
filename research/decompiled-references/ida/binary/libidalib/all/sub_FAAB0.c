unsigned __int64 __fastcall sub_FAAB0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rsi
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v3 = a2[1];
  v20 = __readfsqword(0x28u);
  v5 = *a2;
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v18 = qvector_reserve();
    v3 = a2[1];
    *a2 = v18;
    v5 = v18;
  }
  v6 = (__int64 *)(v5 + 24 * v3);
  *v6 = 0;
  *(_OWORD *)(v6 + 1) = 0;
  ++a2[1];
  v7 = *(_QWORD *)(a1 + 256);
  v8 = *(_QWORD *)(a1 + 280);
  v9 = *(int *)(a1 + 320);
  v10 = v9 + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
  if ( 0x8F5C28F5C28F5C29LL
     * (((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 296)) >> 3) + ((*(_QWORD *)(a1 + 272) - v7) >> 3))
     + 2 * ((*(_QWORD *)(a1 + 312) == 0) + ((*(_QWORD *)(a1 + 312) - v8) >> 3) - 1) < v10 )
    v10 = -1030792151
        * (((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 296)) >> 3) + ((*(_QWORD *)(a1 + 272) - v7) >> 3))
        + 2 * ((*(_QWORD *)(a1 + 312) == 0) + (unsigned int)((*(_QWORD *)(a1 + 312) - v8) >> 3) - 1);
  if ( (int)v9 < v10 )
  {
    v11 = v6[1];
    while ( 1 )
    {
      v15 = v9 - 0x70A3D70A3D70A3D7LL * ((v7 - *(_QWORD *)(a1 + 264)) >> 3);
      if ( v15 < 0 )
        break;
      v12 = v15 >> 1;
      if ( v15 > 1 )
        goto LABEL_8;
      v13 = v7 + 200 * v9;
LABEL_9:
      v14 = *v6;
      if ( v6[2] < (unsigned __int64)(v11 + 1) )
      {
        v19 = v13;
        v16 = qvector_reserve();
        v11 = v6[1];
        v13 = v19;
        *v6 = v16;
        v14 = v16;
      }
      *(_QWORD *)(v14 + 8 * v11) = v13;
      ++v9;
      v11 = v6[1] + 1;
      v6[1] = v11;
      if ( v10 <= (int)v9 )
        return v20 - __readfsqword(0x28u);
      v7 = *(_QWORD *)(a1 + 256);
      v8 = *(_QWORD *)(a1 + 280);
    }
    v12 = ~((unsigned __int64)~v15 >> 1);
LABEL_8:
    v13 = *(_QWORD *)(v8 + 8 * v12) + 200 * (v15 - 2 * v12);
    goto LABEL_9;
  }
  return v20 - __readfsqword(0x28u);
}

