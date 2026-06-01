__int64 __fastcall sub_1097980(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  _BYTE *v7; // rdx
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  _BYTE *v13; // rdx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // rdx
  char *v19; // r13
  unsigned __int8 *v20; // rbx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  void *v23; // rdi
  void **v24; // rbp
  unsigned __int64 v25; // rax
  void **v26; // r12
  void **v27; // rbx
  void **v28; // rdi
  void **v29; // rdi
  void **v30; // rbx
  void **v31; // r12
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // r14
  __int64 v38; // rbp
  void *v39; // rdi
  void *v40; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v41; // [rsp+8h] [rbp-70h]
  __int64 v42; // [rsp+10h] [rbp-68h]
  void *v43; // [rsp+20h] [rbp-58h]
  _BYTE v44[16]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v45; // [rsp+40h] [rbp-38h]

  v4 = a2[1];
  v5 = *a2;
  if ( *a2 != v4 )
  {
    while ( 1 )
    {
      while ( **(_BYTE **)v5 != 43 )
      {
        v5 += 32;
        if ( v4 == v5 )
          goto LABEL_22;
      }
      if ( !sub_990D60(v5, "+mmx") )
        break;
      if ( sub_990D60(v5, "+aes") )
      {
        if ( sub_990D60(v5, "+vaes") )
        {
          if ( sub_990D60(v5, "+pclmul") )
          {
            if ( sub_990D60(v5, "+vpclmulqdq") )
            {
              if ( sub_990D60(v5, "+lzcnt") )
              {
                if ( sub_990D60(v5, "+rdrnd") )
                {
                  if ( sub_990D60(v5, "+fsgsbase") )
                  {
                    if ( sub_990D60(v5, "+bmi") )
                    {
                      if ( sub_990D60(v5, "+bmi2") )
                      {
                        if ( sub_990D60(v5, "+popcnt") )
                        {
                          if ( sub_990D60(v5, "+rtm") )
                          {
                            if ( sub_990D60(v5, "+prfchw") )
                            {
                              if ( sub_990D60(v5, "+rdseed") )
                              {
                                if ( sub_990D60(v5, "+adx") )
                                {
                                  if ( sub_990D60(v5, "+tbm") )
                                  {
                                    if ( sub_990D60(v5, "+lwp") )
                                    {
                                      if ( sub_990D60(v5, "+fma") )
                                      {
                                        if ( sub_990D60(v5, "+f16c") )
                                        {
                                          if ( sub_990D60(v5, "+gfni") )
                                          {
                                            if ( sub_990D60(v5, "+evex512") )
                                            {
                                              if ( sub_990D60(v5, "+avx10.1-256") )
                                              {
                                                if ( sub_990D60(v5, "+avx10.1-512") )
                                                {
                                                  if ( sub_990D60(v5, "+avx10.2-256") )
                                                  {
                                                    if ( sub_990D60(v5, "+avx10.2-512") )
                                                    {
                                                      if ( sub_990D60(v5, "+avx512cd") )
                                                      {
                                                        if ( sub_990D60(v5, "+avx512vpopcntdq") )
                                                        {
                                                          if ( sub_990D60(v5, "+avx512vnni") )
                                                          {
                                                            if ( sub_990D60(v5, "+avx512bf16") )
                                                            {
                                                              if ( sub_990D60(v5, "+avx512fp16") )
                                                              {
                                                                if ( sub_990D60(v5, "+avx512dq") )
                                                                {
                                                                  if ( sub_990D60(v5, "+avx512bitalg") )
                                                                  {
                                                                    if ( sub_990D60(v5, "+avx512bw") )
                                                                    {
                                                                      if ( sub_990D60(v5, "+avx512vl") )
                                                                      {
                                                                        if ( sub_990D60(v5, "+avx512vbmi") )
                                                                        {
                                                                          if ( sub_990D60(v5, "+avx512vbmi2") )
                                                                          {
                                                                            if ( sub_990D60(v5, "+avx512ifma") )
                                                                            {
                                                                              if ( sub_990D60(v5, "+avx512vp2intersect") )
                                                                              {
                                                                                if ( sub_990D60(v5, "+sha") )
                                                                                {
                                                                                  if ( sub_990D60(v5, "+sha512") )
                                                                                  {
                                                                                    if ( sub_990D60(v5, "+shstk") )
                                                                                    {
                                                                                      if ( sub_990D60(v5, "+sm3") )
                                                                                      {
                                                                                        if ( sub_990D60(v5, "+sm4") )
                                                                                        {
                                                                                          if ( sub_990D60(v5, "+movbe") )
                                                                                          {
                                                                                            if ( sub_990D60(
                                                                                                   v5,
                                                                                                   "+movrs") )
                                                                                            {
                                                                                              if ( sub_990D60(
                                                                                                     v5,
                                                                                                     "+sgx") )
                                                                                              {
                                                                                                if ( sub_990D60(v5, "+cx8") )
                                                                                                {
                                                                                                  if ( sub_990D60(v5, "+cx16") )
                                                                                                  {
                                                                                                    if ( sub_990D60(v5, "+fxsr") )
                                                                                                    {
                                                                                                      if ( sub_990D60(v5, "+xsave") )
                                                                                                      {
                                                                                                        if ( sub_990D60(v5, "+xsaveopt") )
                                                                                                        {
                                                                                                          if ( sub_990D60(v5, "+xsavec") )
                                                                                                          {
                                                                                                            if ( sub_990D60(v5, "+xsaves") )
                                                                                                            {
                                                                                                              if ( sub_990D60(v5, "+mwaitx") )
                                                                                                              {
                                                                                                                if ( sub_990D60(v5, "+pku") )
                                                                                                                {
                                                                                                                  if ( sub_990D60(v5, "+clflushopt") )
                                                                                                                  {
                                                                                                                    if ( sub_990D60(v5, "+clwb") )
                                                                                                                    {
                                                                                                                      if ( sub_990D60(v5, "+wbnoinvd") )
                                                                                                                      {
                                                                                                                        if ( sub_990D60(v5, "+prefetchi") )
                                                                                                                        {
                                                                                                                          if ( sub_990D60(v5, "+clzero") )
                                                                                                                          {
                                                                                                                            if ( sub_990D60(v5, "+cldemote") )
                                                                                                                            {
                                                                                                                              if ( sub_990D60(v5, "+rdpid") )
                                                                                                                              {
                                                                                                                                if ( sub_990D60(v5, "+rdpru") )
                                                                                                                                {
                                                                                                                                  if ( sub_990D60(v5, "+kl") )
                                                                                                                                  {
                                                                                                                                    if ( sub_990D60(v5, "+widekl") )
                                                                                                                                    {
                                                                                                                                      if ( sub_990D60(v5, "+retpoline-external-thunk") )
                                                                                                                                      {
                                                                                                                                        if ( sub_990D60(v5, "+sahf") )
                                                                                                                                        {
                                                                                                                                          if ( sub_990D60(v5, "+waitpkg") )
                                                                                                                                          {
                                                                                                                                            if ( sub_990D60(v5, "+movdiri") )
                                                                                                                                            {
                                                                                                                                              if ( sub_990D60(v5, "+movdir64b") )
                                                                                                                                              {
                                                                                                                                                if ( sub_990D60(v5, "+pconfig") )
                                                                                                                                                {
                                                                                                                                                  if ( sub_990D60(v5, "+ptwrite") )
                                                                                                                                                  {
                                                                                                                                                    if ( sub_990D60(v5, "+invpcid") )
                                                                                                                                                    {
                                                                                                                                                      if ( sub_990D60(v5, "+enqcmd") )
                                                                                                                                                      {
                                                                                                                                                        if ( sub_990D60(v5, "+hreset") )
                                                                                                                                                        {
                                                                                                                                                          if ( sub_990D60(v5, "+amx-bf16") )
                                                                                                                                                          {
                                                                                                                                                            if ( sub_990D60(v5, "+amx-fp16") )
                                                                                                                                                            {
                                                                                                                                                              if ( sub_990D60(v5, "+amx-int8") )
                                                                                                                                                              {
                                                                                                                                                                if ( sub_990D60(v5, "+amx-tile") )
                                                                                                                                                                {
                                                                                                                                                                  if ( sub_990D60(v5, "+amx-complex") )
                                                                                                                                                                  {
                                                                                                                                                                    if ( sub_990D60(v5, "+amx-fp8") )
                                                                                                                                                                    {
                                                                                                                                                                      if ( sub_990D60(v5, "+amx-movrs") )
                                                                                                                                                                      {
                                                                                                                                                                        if ( sub_990D60(v5, "+amx-transpose") )
                                                                                                                                                                        {
                                                                                                                                                                          if ( sub_990D60(v5, "+amx-avx512") )
                                                                                                                                                                          {
                                                                                                                                                                            if ( sub_990D60(v5, "+amx-tf32") )
                                                                                                                                                                            {
                                                                                                                                                                              if ( sub_990D60(v5, "+cmpccxadd") )
                                                                                                                                                                              {
                                                                                                                                                                                if ( sub_990D60(v5, "+raoint") )
                                                                                                                                                                                {
                                                                                                                                                                                  if ( sub_990D60(v5, "+avxifma") )
                                                                                                                                                                                  {
                                                                                                                                                                                    if ( sub_990D60(v5, "+avxneconvert") )
                                                                                                                                                                                    {
                                                                                                                                                                                      if ( sub_990D60(v5, "+avxvnni") )
                                                                                                                                                                                      {
                                                                                                                                                                                        if ( sub_990D60(v5, "+avxvnniint16") )
                                                                                                                                                                                        {
                                                                                                                                                                                          if ( sub_990D60(v5, "+avxvnniint8") )
                                                                                                                                                                                          {
                                                                                                                                                                                            if ( sub_990D60(v5, "+serialize") )
                                                                                                                                                                                            {
                                                                                                                                                                                              if ( sub_990D60(v5, "+tsxldtrk") )
                                                                                                                                                                                              {
                                                                                                                                                                                                if ( sub_990D60(v5, "+uintr") )
                                                                                                                                                                                                {
                                                                                                                                                                                                  if ( sub_990D60(v5, "+usermsr") )
                                                                                                                                                                                                  {
                                                                                                                                                                                                    if ( sub_990D60(v5, "+crc32") )
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if ( sub_990D60(v5, "+x87") )
                                                                                                                                                                                                      {
                                                                                                                                                                                                        if ( sub_990D60(v5, "+fullbf16") )
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if ( sub_990D60(v5, "+egpr") )
                                                                                                                                                                                                          {
                                                                                                                                                                                                            if ( sub_990D60(v5, "+inline-asm-use-gpr32") )
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if ( sub_990D60(v5, "+push2pop2") )
                                                                                                                                                                                                              {
                                                                                                                                                                                                                if ( sub_990D60(v5, "+ppx") )
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if ( sub_990D60(v5, "+ndd") )
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    if ( sub_990D60(v5, "+ccmp") )
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if ( sub_990D60(v5, "+nf") )
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        if ( sub_990D60(v5, "+cf") )
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if ( sub_990D60(v5, "+zu") )
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                            if ( !sub_990D60(v5, "+branch-hint") )
                                                                                                                                                                                                                              *(_BYTE *)(a1 + 630) = 1;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                            *(_BYTE *)(a1 + 628) = 1;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          *(_BYTE *)(a1 + 627) = 1;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        *(_BYTE *)(a1 + 626) = 1;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    else
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      *(_BYTE *)(a1 + 625) = 1;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    *(_BYTE *)(a1 + 624) = 1;
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                }
                                                                                                                                                                                                                else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  *(_BYTE *)(a1 + 623) = 1;
                                                                                                                                                                                                                }
                                                                                                                                                                                                              }
                                                                                                                                                                                                              else
                                                                                                                                                                                                              {
                                                                                                                                                                                                                *(_BYTE *)(a1 + 622) = 1;
                                                                                                                                                                                                              }
                                                                                                                                                                                                            }
                                                                                                                                                                                                            else
                                                                                                                                                                                                            {
                                                                                                                                                                                                              *(_BYTE *)(a1 + 629) = 1;
                                                                                                                                                                                                            }
                                                                                                                                                                                                          }
                                                                                                                                                                                                          else
                                                                                                                                                                                                          {
                                                                                                                                                                                                            *(_BYTE *)(a1 + 621) = 1;
                                                                                                                                                                                                          }
                                                                                                                                                                                                        }
                                                                                                                                                                                                        else
                                                                                                                                                                                                        {
                                                                                                                                                                                                          *(_BYTE *)(a1 + 281) = 1;
                                                                                                                                                                                                        }
                                                                                                                                                                                                      }
                                                                                                                                                                                                      else
                                                                                                                                                                                                      {
                                                                                                                                                                                                        *(_BYTE *)(a1 + 620) = 1;
                                                                                                                                                                                                      }
                                                                                                                                                                                                    }
                                                                                                                                                                                                    else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      *(_BYTE *)(a1 + 619) = 1;
                                                                                                                                                                                                    }
                                                                                                                                                                                                  }
                                                                                                                                                                                                  else
                                                                                                                                                                                                  {
                                                                                                                                                                                                    *(_BYTE *)(a1 + 617) = 1;
                                                                                                                                                                                                  }
                                                                                                                                                                                                }
                                                                                                                                                                                                else
                                                                                                                                                                                                {
                                                                                                                                                                                                  *(_BYTE *)(a1 + 618) = 1;
                                                                                                                                                                                                }
                                                                                                                                                                                              }
                                                                                                                                                                                              else
                                                                                                                                                                                              {
                                                                                                                                                                                                *(_BYTE *)(a1 + 616) = 1;
                                                                                                                                                                                              }
                                                                                                                                                                                            }
                                                                                                                                                                                            else
                                                                                                                                                                                            {
                                                                                                                                                                                              *(_BYTE *)(a1 + 615) = 1;
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                          else
                                                                                                                                                                                          {
                                                                                                                                                                                            *(_BYTE *)(a1 + 600) = 1;
                                                                                                                                                                                          }
                                                                                                                                                                                        }
                                                                                                                                                                                        else
                                                                                                                                                                                        {
                                                                                                                                                                                          *(_BYTE *)(a1 + 596) = 1;
                                                                                                                                                                                        }
                                                                                                                                                                                      }
                                                                                                                                                                                      else
                                                                                                                                                                                      {
                                                                                                                                                                                        *(_BYTE *)(a1 + 605) = 1;
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                    else
                                                                                                                                                                                    {
                                                                                                                                                                                      *(_BYTE *)(a1 + 601) = 1;
                                                                                                                                                                                    }
                                                                                                                                                                                  }
                                                                                                                                                                                  else
                                                                                                                                                                                  {
                                                                                                                                                                                    *(_BYTE *)(a1 + 559) = 1;
                                                                                                                                                                                  }
                                                                                                                                                                                }
                                                                                                                                                                                else
                                                                                                                                                                                {
                                                                                                                                                                                  *(_BYTE *)(a1 + 599) = 1;
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                              else
                                                                                                                                                                              {
                                                                                                                                                                                *(_BYTE *)(a1 + 598) = 1;
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                            else
                                                                                                                                                                            {
                                                                                                                                                                              *(_BYTE *)(a1 + 614) = 1;
                                                                                                                                                                            }
                                                                                                                                                                          }
                                                                                                                                                                          else
                                                                                                                                                                          {
                                                                                                                                                                            *(_BYTE *)(a1 + 613) = 1;
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                        else
                                                                                                                                                                        {
                                                                                                                                                                          *(_BYTE *)(a1 + 612) = 1;
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                      else
                                                                                                                                                                      {
                                                                                                                                                                        *(_BYTE *)(a1 + 611) = 1;
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                    else
                                                                                                                                                                    {
                                                                                                                                                                      *(_BYTE *)(a1 + 610) = 1;
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                                  else
                                                                                                                                                                  {
                                                                                                                                                                    *(_BYTE *)(a1 + 609) = 1;
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                                else
                                                                                                                                                                {
                                                                                                                                                                  *(_BYTE *)(a1 + 606) = 1;
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                              else
                                                                                                                                                              {
                                                                                                                                                                *(_BYTE *)(a1 + 607) = 1;
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                            else
                                                                                                                                                            {
                                                                                                                                                              *(_BYTE *)(a1 + 597) = 1;
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                          else
                                                                                                                                                          {
                                                                                                                                                            *(_BYTE *)(a1 + 608) = 1;
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                        else
                                                                                                                                                        {
                                                                                                                                                          *(_BYTE *)(a1 + 604) = 1;
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                      else
                                                                                                                                                      {
                                                                                                                                                        *(_BYTE *)(a1 + 595) = 1;
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                    else
                                                                                                                                                    {
                                                                                                                                                      *(_BYTE *)(a1 + 594) = 1;
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                  else
                                                                                                                                                  {
                                                                                                                                                    *(_BYTE *)(a1 + 593) = 1;
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                                else
                                                                                                                                                {
                                                                                                                                                  *(_BYTE *)(a1 + 578) = 1;
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                              else
                                                                                                                                              {
                                                                                                                                                *(_BYTE *)(a1 + 592) = 1;
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                            else
                                                                                                                                            {
                                                                                                                                              *(_BYTE *)(a1 + 591) = 1;
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                          else
                                                                                                                                          {
                                                                                                                                            *(_BYTE *)(a1 + 590) = 1;
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                        else
                                                                                                                                        {
                                                                                                                                          *(_BYTE *)(a1 + 588) = 1;
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                      else
                                                                                                                                      {
                                                                                                                                        *(_BYTE *)(a1 + 587) = 1;
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                    else
                                                                                                                                    {
                                                                                                                                      *(_BYTE *)(a1 + 603) = 1;
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                  else
                                                                                                                                  {
                                                                                                                                    *(_BYTE *)(a1 + 602) = 1;
                                                                                                                                  }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                  *(_BYTE *)(a1 + 586) = 1;
                                                                                                                                }
                                                                                                                              }
                                                                                                                              else
                                                                                                                              {
                                                                                                                                *(_BYTE *)(a1 + 585) = 1;
                                                                                                                              }
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                              *(_BYTE *)(a1 + 577) = 1;
                                                                                                                            }
                                                                                                                          }
                                                                                                                          else
                                                                                                                          {
                                                                                                                            *(_BYTE *)(a1 + 576) = 1;
                                                                                                                          }
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                          *(_BYTE *)(a1 + 584) = 1;
                                                                                                                        }
                                                                                                                      }
                                                                                                                      else
                                                                                                                      {
                                                                                                                        *(_BYTE *)(a1 + 589) = 1;
                                                                                                                      }
                                                                                                                    }
                                                                                                                    else
                                                                                                                    {
                                                                                                                      *(_BYTE *)(a1 + 581) = 1;
                                                                                                                    }
                                                                                                                  }
                                                                                                                  else
                                                                                                                  {
                                                                                                                    *(_BYTE *)(a1 + 580) = 1;
                                                                                                                  }
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                  *(_BYTE *)(a1 + 579) = 1;
                                                                                                                }
                                                                                                              }
                                                                                                              else
                                                                                                              {
                                                                                                                *(_BYTE *)(a1 + 575) = 1;
                                                                                                              }
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                              *(_BYTE *)(a1 + 574) = 1;
                                                                                                            }
                                                                                                          }
                                                                                                          else
                                                                                                          {
                                                                                                            *(_BYTE *)(a1 + 573) = 1;
                                                                                                          }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          *(_BYTE *)(a1 + 572) = 1;
                                                                                                        }
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        *(_BYTE *)(a1 + 571) = 1;
                                                                                                      }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      *(_BYTE *)(a1 + 570) = 1;
                                                                                                    }
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    *(_BYTE *)(a1 + 569) = 1;
                                                                                                  }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  *(_BYTE *)(a1 + 568) = 1;
                                                                                                }
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                *(_BYTE *)(a1 + 566) = 1;
                                                                                              }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              *(_BYTE *)(a1 + 583) = 1;
                                                                                            }
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            *(_BYTE *)(a1 + 582) = 1;
                                                                                          }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          *(_BYTE *)(a1 + 567) = 1;
                                                                                        }
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        *(_BYTE *)(a1 + 565) = 1;
                                                                                      }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      *(_BYTE *)(a1 + 564) = 1;
                                                                                    }
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    *(_BYTE *)(a1 + 563) = 1;
                                                                                  }
                                                                                }
                                                                                else
                                                                                {
                                                                                  *(_BYTE *)(a1 + 562) = 1;
                                                                                }
                                                                              }
                                                                              else
                                                                              {
                                                                                *(_BYTE *)(a1 + 561) = 1;
                                                                              }
                                                                            }
                                                                            else
                                                                            {
                                                                              *(_BYTE *)(a1 + 560) = 1;
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_BYTE *)(a1 + 558) = 1;
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          *(_BYTE *)(a1 + 557) = 1;
                                                                        }
                                                                      }
                                                                      else
                                                                      {
                                                                        *(_BYTE *)(a1 + 556) = 1;
                                                                      }
                                                                    }
                                                                    else
                                                                    {
                                                                      *(_BYTE *)(a1 + 555) = 1;
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_BYTE *)(a1 + 554) = 1;
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  *(_BYTE *)(a1 + 553) = 1;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                *(_BYTE *)(a1 + 551) = 1;
                                                                *(_BYTE *)(a1 + 276) = 1;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              *(_BYTE *)(a1 + 552) = 1;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            *(_BYTE *)(a1 + 550) = 1;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          *(_BYTE *)(a1 + 549) = 1;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        *(_BYTE *)(a1 + 548) = 1;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      *(_BYTE *)(a1 + 546) = 1;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    *(_BYTE *)(a1 + 545) = 1;
                                                    *(_BYTE *)(a1 + 281) = 1;
                                                  }
                                                }
                                                else
                                                {
                                                  *(_BYTE *)(a1 + 544) = 1;
                                                }
                                              }
                                              else
                                              {
                                                *(_BYTE *)(a1 + 543) = 1;
                                              }
                                            }
                                            else
                                            {
                                              *(_BYTE *)(a1 + 547) = 1;
                                            }
                                          }
                                          else
                                          {
                                            *(_BYTE *)(a1 + 528) = 1;
                                          }
                                        }
                                        else
                                        {
                                          *(_BYTE *)(a1 + 542) = 1;
                                        }
                                      }
                                      else
                                      {
                                        *(_BYTE *)(a1 + 541) = 1;
                                      }
                                    }
                                    else
                                    {
                                      *(_BYTE *)(a1 + 540) = 1;
                                    }
                                  }
                                  else
                                  {
                                    *(_BYTE *)(a1 + 539) = 1;
                                  }
                                }
                                else
                                {
                                  *(_BYTE *)(a1 + 538) = 1;
                                }
                              }
                              else
                              {
                                *(_BYTE *)(a1 + 537) = 1;
                              }
                            }
                            else
                            {
                              *(_BYTE *)(a1 + 536) = 1;
                            }
                          }
                          else
                          {
                            *(_BYTE *)(a1 + 535) = 1;
                          }
                        }
                        else
                        {
                          *(_BYTE *)(a1 + 534) = 1;
                        }
                      }
                      else
                      {
                        *(_BYTE *)(a1 + 533) = 1;
                      }
                    }
                    else
                    {
                      *(_BYTE *)(a1 + 532) = 1;
                    }
                  }
                  else
                  {
                    *(_BYTE *)(a1 + 531) = 1;
                  }
                }
                else
                {
                  *(_BYTE *)(a1 + 530) = 1;
                }
              }
              else
              {
                *(_BYTE *)(a1 + 529) = 1;
              }
            }
            else
            {
              *(_BYTE *)(a1 + 527) = 1;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 526) = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 525) = 1;
        }
LABEL_7:
        v6 = *(_QWORD *)(v5 + 8);
        v7 = *(_BYTE **)v5;
        if ( v6 == 8 )
          goto LABEL_29;
        goto LABEL_8;
      }
      *(_BYTE *)(a1 + 524) = 1;
      v6 = *(_QWORD *)(v5 + 8);
      v7 = *(_BYTE **)v5;
      if ( v6 == 8 )
      {
LABEL_29:
        v9 = 9;
        if ( *(_QWORD *)v7 == 0x663231357876612BLL )
          goto LABEL_30;
        goto LABEL_60;
      }
LABEL_8:
      switch ( v6 )
      {
        case 5LL:
          if ( *(_DWORD *)v7 == 2021024043 )
          {
            v9 = 8;
            if ( v7[4] == 50 )
            {
              v8 = 8;
              goto LABEL_14;
            }
          }
          break;
        case 4LL:
          v9 = 7;
          if ( *(_DWORD *)v7 == 2021024043 )
            goto LABEL_30;
          v8 = *(_DWORD *)v7 == 1702064939;
          v9 = v8;
          goto LABEL_14;
        case 7LL:
          if ( *(_DWORD *)v7 == 1702064939 && *((_WORD *)v7 + 2) == 11828 )
          {
            v9 = 6;
            if ( v7[6] == 50 )
              goto LABEL_30;
          }
          if ( *(_DWORD *)v7 != 1702064939 )
            goto LABEL_13;
          if ( *((_WORD *)v7 + 2) != 11828 )
            goto LABEL_13;
          v9 = 5;
          if ( v7[6] != 49 )
            goto LABEL_13;
          v8 = 5;
          goto LABEL_14;
      }
LABEL_60:
      if ( v6 == 6 )
      {
        if ( *(_DWORD *)v7 != 1936945963 || (v9 = 4, *((_WORD *)v7 + 2) != 13157) )
        {
LABEL_13:
          v8 = 0;
          v9 = 0;
          goto LABEL_14;
        }
LABEL_30:
        v8 = v9;
        goto LABEL_14;
      }
      if ( v6 != 5 )
        goto LABEL_13;
      if ( *(_DWORD *)v7 == 1702064939 && (v9 = 3, v7[4] == 51) )
      {
        v8 = 3;
      }
      else
      {
        if ( *(_DWORD *)v7 != 1702064939 )
          goto LABEL_13;
        v9 = 2;
        if ( v7[4] != 50 )
          goto LABEL_13;
        v8 = 2;
      }
LABEL_14:
      v10 = *(_DWORD *)(a1 + 512);
      v11 = v10;
      if ( v10 < v8 )
      {
        v11 = v8;
        v10 = v9;
      }
      *(_DWORD *)(a1 + 512) = v10;
      *(_BYTE *)(a1 + 279) = v11 > 1;
      *(_BYTE *)(a1 + 280) = v11 > 1;
      v12 = *(_QWORD *)(v5 + 8);
      v13 = *(_BYTE **)v5;
      if ( v12 == 4 )
      {
        v14 = 0;
        v15 = 0;
        if ( *(_DWORD *)v13 == 1886353451 )
        {
          v15 = 3;
          v14 = 3;
        }
        goto LABEL_19;
      }
      if ( v12 == 5 )
      {
        if ( *(_DWORD *)v13 == 1634559531 )
        {
          v15 = 2;
          if ( v13[4] == 52 )
          {
            v14 = 2;
            goto LABEL_19;
          }
        }
      }
      else if ( v12 == 6 && *(_DWORD *)v13 == 1702064939 )
      {
        v14 = 1;
        v15 = 1;
        if ( *((_WORD *)v13 + 2) == 24884 )
          goto LABEL_19;
      }
      v14 = 0;
      v15 = 0;
LABEL_19:
      if ( *(_DWORD *)(a1 + 520) >= v14 )
        v15 = *(_DWORD *)(a1 + 520);
      v5 += 32;
      *(_DWORD *)(a1 + 520) = v15;
      if ( v4 == v5 )
        goto LABEL_22;
    }
    *(_BYTE *)(a1 + 516) = 1;
    goto LABEL_7;
  }
LABEL_22:
  v16 = *(_DWORD *)(a1 + 636);
  if ( v16 == 1 )
  {
    if ( *(int *)(a1 + 512) <= 0 )
      goto LABEL_32;
    result = *(unsigned __int8 *)(a1 + 620);
    if ( !(_BYTE)result )
    {
LABEL_25:
      v18 = sub_21D53A0();
      result = 1;
      if ( *(_QWORD *)(a1 + 112) == v18 )
        *(_BYTE *)(a1 + 283) = 0;
    }
  }
  else
  {
    if ( v16 == 2 && *(int *)(a1 + 512) > 0 )
    {
LABEL_32:
      v19 = "sse";
      sub_FA3370((__int64)&v40, a3, 0, 73);
      v20 = (unsigned __int8 *)v40;
      if ( *(_DWORD *)(a1 + 636) != 1 )
        v19 = "387";
      if ( !v40 )
      {
        v33 = v41;
        v34 = *(_DWORD *)(v41 + 14976);
        if ( v34 )
        {
          v35 = (unsigned int)(v34 - 1);
          *(_DWORD *)(v41 + 14976) = v35;
          v20 = *(unsigned __int8 **)(v33 + 8 * v35 + 14848);
          v36 = *((unsigned int *)v20 + 134);
          *v20 = 0;
          v37 = *((_QWORD *)v20 + 66);
          *((_DWORD *)v20 + 106) = 0;
          v38 = v37 + (v36 << 6);
          while ( v37 != v38 )
          {
            while ( 1 )
            {
              v38 -= 64;
              v39 = *(void **)(v38 + 24);
              if ( v39 == (void *)(v38 + 40) )
                break;
              operator delete(v39);
              if ( v37 == v38 )
                goto LABEL_111;
            }
          }
LABEL_111:
          *((_DWORD *)v20 + 134) = 0;
        }
        else
        {
          v20 = (unsigned __int8 *)operator new(0x3A0u);
          *v20 = 0;
          *((_QWORD *)v20 + 12) = v20 + 112;
          *((_QWORD *)v20 + 16) = v20 + 144;
          *((_QWORD *)v20 + 20) = v20 + 176;
          *((_QWORD *)v20 + 24) = v20 + 208;
          *((_QWORD *)v20 + 28) = v20 + 240;
          *((_QWORD *)v20 + 32) = v20 + 272;
          *((_QWORD *)v20 + 36) = v20 + 304;
          *((_QWORD *)v20 + 40) = v20 + 336;
          *((_QWORD *)v20 + 44) = v20 + 368;
          *((_QWORD *)v20 + 48) = v20 + 400;
          *((_QWORD *)v20 + 52) = v20 + 432;
          *((_QWORD *)v20 + 13) = 0;
          v20[112] = 0;
          *((_QWORD *)v20 + 17) = 0;
          v20[144] = 0;
          *((_QWORD *)v20 + 21) = 0;
          v20[176] = 0;
          *((_QWORD *)v20 + 25) = 0;
          v20[208] = 0;
          *((_QWORD *)v20 + 29) = 0;
          v20[240] = 0;
          *((_QWORD *)v20 + 33) = 0;
          v20[272] = 0;
          *((_QWORD *)v20 + 37) = 0;
          v20[304] = 0;
          *((_QWORD *)v20 + 41) = 0;
          v20[336] = 0;
          *((_QWORD *)v20 + 45) = 0;
          v20[368] = 0;
          *((_QWORD *)v20 + 49) = 0;
          v20[400] = 0;
          *((_QWORD *)v20 + 53) = 0x800000000LL;
          *((_QWORD *)v20 + 66) = v20 + 544;
          *((_QWORD *)v20 + 67) = 0x600000000LL;
        }
        v40 = v20;
      }
      v20[*v20 + 1] = 1;
      v21 = v40;
      v22 = *(unsigned __int8 *)v40;
      *(_BYTE *)v40 = v22 + 1;
      v21[v22 + 2] = v19;
      if ( (_BYTE)v45 )
      {
        sub_FA3A50(v42, (__int64)&v40, SHIBYTE(v45));
        v23 = v43;
        v42 = 0;
        v45 = 0;
        if ( v43 == v44 )
          goto LABEL_38;
      }
      else
      {
        v23 = v43;
        if ( v43 == v44 )
        {
LABEL_38:
          v24 = (void **)v40;
          if ( v40 )
          {
            v25 = v41;
            if ( v41 )
            {
              if ( (unsigned __int64)v40 >= v41 && (unsigned __int64)v40 <= v41 + 14848 )
              {
                v32 = *(unsigned int *)(v41 + 14976);
                *(_DWORD *)(v41 + 14976) = v32 + 1;
                *(_QWORD *)(v25 + 8 * v32 + 14848) = v24;
                return 0;
              }
              v26 = *((void ***)v40 + 66);
              v27 = &v26[8 * (unsigned __int64)*((unsigned int *)v40 + 134)];
              if ( v26 != v27 )
              {
                do
                {
                  while ( 1 )
                  {
                    v27 -= 8;
                    v28 = (void **)v27[3];
                    if ( v28 == v27 + 5 )
                      break;
                    operator delete(v28);
                    if ( v26 == v27 )
                      goto LABEL_44;
                  }
                }
                while ( v26 != v27 );
LABEL_44:
                v27 = (void **)v24[66];
              }
              if ( v27 != v24 + 68 )
                free(v27);
              v29 = (void **)v24[52];
              if ( v29 != v24 + 54 )
                free(v29);
              v30 = v24 + 48;
              v31 = v24 + 8;
              do
              {
                while ( *v30 != v30 + 2 )
                {
                  operator delete(*v30);
                  v30 -= 4;
                  if ( v31 == v30 )
                    goto LABEL_52;
                }
                v30 -= 4;
              }
              while ( v31 != v30 );
LABEL_52:
              operator delete(v24, 0x3A0u);
            }
          }
          return 0;
        }
      }
      operator delete(v23);
      goto LABEL_38;
    }
    result = *(unsigned __int8 *)(a1 + 620);
    if ( !(_BYTE)result )
      goto LABEL_25;
  }
  return result;
}

