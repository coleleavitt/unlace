local n, t = ...
local s = 0
for i = 1, n do
  if i % 3 ~= 0 then s = s + i end
end
t.total = s .. " items"
print(s, t[1])
return s
